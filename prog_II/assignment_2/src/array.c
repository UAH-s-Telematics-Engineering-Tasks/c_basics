/* Nombre Fichero: src/array.c */

#include "array.h"

int copiarArray(double *p_destino, int num_elem, const double *p_origen)
{
	if (num_elem <= 0 || !p_destino || !p_origen) { //Checks ptr != NULL and num_elem > 0
		//printf("ERROR!, num_elem <= 0 OR pointers point to NULL"); //Used in debugging!
		return -1;
	}
	else
		for (int i = 0; i < num_elem; i++)
			p_destino[i] = p_origen[i];
	return 1; //OK
}

int imprimirArray(const double *p, int num_elem)
{
	if (num_elem <= 0 || !p) {	//Checks p is not NULL and num_elem > 0
		//printf("ERROR!, num_elem <= 0 OR pointers point to NULL"); //Used in debugging!
		return -1;
	}
	else
		for (int i = 0; i < num_elem; i++)
			printf("Element at %d: %g", i, *(p + i)); //%g == scientific notation
	return 1; //OK																we could also use %lf == double format, but it will print 0s
}
