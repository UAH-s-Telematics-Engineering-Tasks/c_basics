#include <stdio.h>

int main(void) {
	int array[7];
	int * p;
	p = &array[0];
	* p = 5;
	* (p + 2) = 15;
	printf ("\n %d %d \n", array[0], array[2]);
  return 0;
}
