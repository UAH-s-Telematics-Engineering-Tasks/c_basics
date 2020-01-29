#include "lib_prot.h"

int main(void) {
  chain_info store_chain;
  int number_of_stores;
  int option = menu();
  while (option != 7) {
    switch (option) {
      case 1://Create store array!
        number_of_stores = create_store_chain(&store_chain);
        break;
      case 2://Initialize stores and create garment array
        populate_stores_with_data(store_chain.ptr_stores, number_of_stores);
        break;
      case 3://View store data
        print_array_of_stores(store_chain.ptr_stores, number_of_stores);
        break;
      case 4://add a new store and add its data
      add_new_store(&(store_chain.ptr_stores), &number_of_stores);
        break;
      case 5://Remove a type of garment from every store
        remove_garment_from_chain(store_chain.ptr_stores, number_of_stores);
        break;
      case 6:
        system("clear");
        break;
      }
    option = menu();
  }
  free_every_dynamic_array(store_chain.ptr_stores, number_of_stores);
  printf("Bye!! Thanks for using our program!!\n");
  return 0;
}
