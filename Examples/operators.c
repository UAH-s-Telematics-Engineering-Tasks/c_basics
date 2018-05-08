#include <stdio.h>

int main(void) {

int i=8, j=3, k=10, max=0;
max = i>j ? i : j;
printf("max:%d\n", max);
max = max>k ? max : k;
printf("max:%d\n", max);
i = j==1 ? 23 :(j==2 ? 39 : 88);
printf("i:%d\n", i);
max = i>j ? i++ : j--;
printf("max:%d\n", max);
printf("i:%d\n", i);
}
