#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tree_element {
  int data;
  struct tree_element* l_ptr;
  struct tree_element* r_ptr;
};

int get_int(const char* args);
void get_struct_data(struct tree_element* struct_ptr, const char* args);
void print_tree(struct tree_element* binary_tree, int n_elms);
void print_struct(struct tree_element* struct_ptr, int* n_tabs);
void tab_away(int tabs);
void link_tree_elements(struct tree_element* binary_tree, int n_elms);
char get_char(const char* args);

int main(void) {
  struct tree_element* root;
  printf("Welcome to our binary tree creator!!\n");
  int n_elms = get_int("Total number of elements: ");
  root = (struct tree_element*) malloc(n_elms * sizeof(struct tree_element));
  for (int i = 0; i < n_elms; i++) {
    get_struct_data(root + i, "Fill in the struct ");
  }
  link_tree_elements(root, n_elms);
  print_tree(root, n_elms);
  free(root);
  return 0;
}

int get_int(const char* args) {
  int n;
  printf("%s", args);
  scanf("%d", &n);
  return n;
}

void get_struct_data(struct tree_element* struct_ptr, const char* args) {
  printf("%s", args);
  struct_ptr->data = get_int("data: ");
}

void print_tree(struct tree_element* binary_tree, int n_elms) {
  int tabs = 0;
  for (int i = 0; i < n_elms; i++) {
    print_struct(binary_tree + i, &tabs);
  }
}

void print_struct(struct tree_element* struct_ptr, int* n_tabs) {
  if (struct_ptr->l_ptr == NULL && struct_ptr->r_ptr == NULL) { //LEAF
    tab_away(*n_tabs);
    printf("Data: %d\n", struct_ptr->data);
    (*n_tabs)--;
  }
  else if (struct_ptr->l_ptr != NULL && struct_ptr->r_ptr != NULL) { //NODE
    tab_away(*n_tabs);
    printf("Data: %d\n", struct_ptr->data);
    (*n_tabs)++;
  }
  else if (struct_ptr->l_ptr != struct_ptr->r_ptr) { //BRANCH (Not necessary, but makes structure clearer for me)
    tab_away(*n_tabs);
    printf("Data: %d\n", struct_ptr->data);
    (*n_tabs)++;
  }
}

void tab_away(int tabs) {
  for (int i = 0; i < tabs; i++) {
    printf("\t");
  }
}

void link_tree_elements(struct tree_element* binary_tree, int n_elms) {
  int linker;
  for (int i = 0; i < n_elms; i++) {
    linker = 1;
    printf("Element at %d\n", i);
    if (get_char("Link to the right? ") == 'Y') {
      (binary_tree + i)->r_ptr = (binary_tree + i + linker);
      linker++;
    } else {
      (binary_tree + i)->r_ptr = 0; //I believe for poiter arithmetic 0 == NULL
    }
    if (get_char("Link to the left? ") == 'Y') {
      (binary_tree + i)->l_ptr = (binary_tree + i + linker);
    } else {
      (binary_tree + i)->l_ptr = 0;
    }
  }
}

char get_char(const char* args) {
  printf("%s", args);
  while(getchar() != '\n');
  char c = getchar();
  return toupper(c);
}
