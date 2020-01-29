#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "data_structures.h"

int create_store_chain(chain_info* chain);
void populate_garment_dynamic_array(garment_info* garments, int n_garments);
int menu(void);
void populate_stores_with_data(store_info* stores, int n_stores);
void print_array_of_stores(store_info* store_arr, int n_stores);
void print_array_of_garments(garment_info* garment_arr, int n_garments);
void print_store_info(store_info store);
void print_garment_info(garment_info garment);
void print_contact_info(contact_info contact);
void get_string(char* target, const char* msg, int size);
int get_int(const char* msg);
float get_float(const char* msg);
char get_char(const char* msg);
void print_some_space(void);
void populate_store(store_info* stores, int);
void add_new_store(store_info** stores, int* n_stores);
garment_info* remove_garment(garment_info* garments, int* n_garments, char* ref_number);
void remove_garment_from_chain(store_info* stores, int n_stores);
void free_every_dynamic_array(store_info* stores, int n_stores);
