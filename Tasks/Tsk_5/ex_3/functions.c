#include "lib_prot.h"

int menu(void) {
  int option;
  printf("1 - Create an array of stores. \n");
  printf("2 - Fill in the data of the stores and garments. \n");
  printf("3 - View data.\n");
  printf("4 - Add a store.\n");
  printf("5 - Erase a type of garment form the stores.\n");
  printf("6 - Clear the screen.\n");
  printf("7 - Exit.\n");
  do {
    option = get_int("Option: ");
  } while (option < 1 || option > 7);
  return option;
}

int create_store_chain(chain_info* chain) {
  get_string(chain->contact.address, "Address: ", 50);
  get_string(chain->contact.phone_number, "Phone Number: ", 10);
  get_string(chain->contact.e_mail, "E-Mail: ", 50);
  chain->n_stores = get_int("Number of stores: ");
  chain->ptr_stores = (store_info*) malloc(sizeof(store_info) * chain->n_stores);
  return chain->n_stores;
}

void populate_stores_with_data(store_info* stores, int n_stores) {
  for (int i = 0; i < n_stores; i++) {
      populate_store(stores, i);
  }
}

void populate_store(store_info* stores, int i) {
  printf("Infor for store number: %d\n", i);
  stores[i].code = get_int("Code for the store: ");
  get_string(stores[i].contact.address, "Address of the store: ", 50);
  get_string(stores[i].contact.phone_number, "Phone Number: ", 10);
  get_string(stores[i].contact.e_mail, "E-Mail: ", 50);
  stores[i].n_garments = get_int("Number of gaments: ");
  stores[i].ptr_garments = (garment_info*) malloc(sizeof(garment_info) * (stores[i].n_garments));
  populate_garment_dynamic_array(stores[i].ptr_garments, stores[i].n_garments);
}

void populate_garment_dynamic_array(garment_info* garments, int n_garments) {
  for (int i = 0; i < n_garments; i++) {
    printf("Information for garment number: %d\n", i);
    get_string(garments[i].ref, "Reference number: ", 15);
    get_string(garments[i].size, "Size (L, XXL...): ", 5);
    garments[i].color = (long int) get_int("Color (0 - 9): ");
    garments[i].type = (long int) get_int("Type (0 - 7): ");
    garments[i].m_f = get_char("M or F: ");
    garments[i].n_units = get_int("Number of units of this type: ");
    garments[i].price = get_float("Price: ");
  }
}

void print_array_of_stores(store_info* store_arr, int n_stores) {
  for (int i = 0; i < n_stores; i++) {
    print_store_info(store_arr[i]);
  }
}

void print_array_of_garments(garment_info* garment_arr, int n_garments) {
  for (int i = 0; i < n_garments; i++) {
    print_garment_info(garment_arr[i]);
  }
}

void print_store_info(store_info store) {
  printf("Code: %d\n", store.code);
  print_contact_info(store.contact);
  printf("Number of garments: %d\n", store.n_garments);
  print_array_of_garments(store.ptr_garments, store.n_garments);
}

void print_contact_info(contact_info contact) {
  printf("Address: %s\n", contact.address);
  printf("Phone Number: %s\n", contact.phone_number );
  printf("E-Mail: %s\n", contact.e_mail);
}

void print_garment_info(garment_info garment) {
  char* colors[10] = {"white", "yellow", "orange", "pink", "red", "green", "blue", "purple", "brown", "black"};
  char* type[8] = {"t_shirt", "shirt", "trousers", "skirt", "dress", "shoes", "sweater", "jacket"};
  printf("REF: %s\n", garment.ref);
  printf("Size: %s\n", garment.size);
  printf("Color: %s\n", colors[garment.color]);
  printf("Type: %s\n", type[garment.type]);
  printf("Male or female: %c\n", garment.m_f);
  printf("Number of units: %d\n", garment.n_units);
  printf("Price: %g\n", garment.price);
}

void add_new_store(store_info** stores, int* n_stores) {
  store_info* aux_ptr = (store_info*) realloc(*stores, sizeof(store_info) * (*n_stores + 1));
  if (aux_ptr != NULL) {
    populate_store(aux_ptr, *n_stores);
    *stores = aux_ptr;
    (*n_stores)++;
  }
  else {
    printf("ERROR!\n");
  }
}

void remove_garment_from_chain(store_info* stores, int n_stores) {
  char target_ref[15];
  int to_be_removed;
  get_string(target_ref, "Reference number to be removed: ", 15);
  for (int i = 0; i < n_stores; i++) {
    stores[i].ptr_garments = remove_garment(stores[i].ptr_garments, &(stores[i].n_garments), target_ref);
  }
}

garment_info* remove_garment(garment_info* garments, int* n_garments, char* ref_number) {
  int items_removed = 0;
  for (int i = 0; i < *n_garments; i++) {
    if (!strcmp(garments[i].ref, ref_number)) {
      for (int j = *n_garments - 1; j > i; j--) {
        garments[j - 1] = garments[j];
      }
      items_removed++;
    }
  }
  garment_info* final_garment_array = (garment_info*) realloc(garments, sizeof(garment_info) * (*n_garments - items_removed));
  (*n_garments) -= items_removed;
  if (final_garment_array != NULL || *n_garments == 0) {
    return final_garment_array;
  } else {
    printf("ERROR!\n");
  }
}

void free_every_dynamic_array(store_info* stores, int n_stores) {
  for (int i = 0; i < n_stores; i++) {
    free(stores[i].ptr_garments);
  }
  free(stores);
}
