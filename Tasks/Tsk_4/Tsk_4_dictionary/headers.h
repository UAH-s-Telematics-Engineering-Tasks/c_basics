#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define W_LEN 20
#define DIC_LEN 100
#define clear() printf("\033[H\033[J")

typedef struct word_pair {
  char spanish[W_LEN];
  char english[W_LEN];
}pair;

void format_string(char arr[]);
int menu(void);
int add_word(struct word_pair dict[], int num_elms);
void translate_word(struct word_pair dict[], int num_elms);
void print_dict(struct word_pair dict[], int num_elms);
