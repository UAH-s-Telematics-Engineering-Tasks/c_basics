#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu(void);
char* human_2_crypto(char* input, int key, int out_mode);
void crypto_2_human(char* input, int key);
int get_int(const char* msg);
void get_string(char* target, const char* msg, int size);
