
/* Nombre Fichero: src/main.c */

#include "arboles.h"

int buscarPunto(const Nodo_t* nodo, char *fd);


int main()
{
	int ret = 1;

	// Pruebas insertar el nodo por la izquierda ----------------------------- //
	Nodo_t* raizArbol = NULL;
	ret = borrarArbol(&raizArbol);
	if (ret > 0 || raizArbol!= NULL) printf("(1.1) Practica INCORRECTA \n");
	else printf("(1.1) Practica correcta\n");

        ret=-1;
	ret = aniadirNodo(&raizArbol, 'A');
	if (ret < 0 || raizArbol== NULL ) printf("(1.2) Practica INCORRECTA \n");
	else printf("(1.2) Practica correcta \n");
	printf("raizArbol: %p\n",raizArbol);
	if( raizArbol != NULL )
	{
		printf("raizArbol->id: %c\n",raizArbol->id);
		printf("raizArbol->hijoIzq: %p\n",raizArbol->hijoIzq);
		printf("raizArbol->hijoDer: %p\n",raizArbol->hijoDer);
	}

	ret = contarNodos(raizArbol);
	if (ret != 1) printf("(1.3) Practica INCORRECTA \n");
	else printf("(1.3) Practica correcta \n");

	ret = aniadirNodo(&raizArbol, 'B');
	if (ret < 0 || raizArbol== NULL) printf("(1.4) Practica INCORRECTA \n");
	else printf("(1.4) Practica correcta \n");

        if( raizArbol != NULL )
	{
            	printf("raizArbol: %p\n",raizArbol);
		printf("raizArbol->id: %c\n",raizArbol->id);
		printf("raizArbol->hijoIzq: %p\n",raizArbol->hijoIzq);
		printf("raizArbol->hijoDer: %p\n",raizArbol->hijoDer);

            if( raizArbol->hijoIzq != NULL )
            {
                    printf("(raizArbol->hijoIzq): %p\n",raizArbol->hijoIzq);
                    printf("(raizArbol->hijoIzq)->id: %c\n",(raizArbol->hijoIzq)->id);
                    printf("(raizArbol->hijoIzq)->hijoIzq: %p\n",(raizArbol->hijoIzq)->hijoIzq);
                    printf("(raizArbol->hijoIzq)->hijoDer: %p\n",(raizArbol->hijoIzq)->hijoDer);
            }

            if( raizArbol->hijoDer != NULL )
            {
                    printf("(raizArbol->hijoDer): %p\n",raizArbol->hijoDer);
                    printf("(raizArbol->hijoDer)->id: %c\n",(raizArbol->hijoDer)->id);
                    printf("(raizArbol->hijoDer)->hijoIzq: %p\n",(raizArbol->hijoDer)->hijoIzq);
                    printf("(raizArbol->hijoDer)->hijoDer: %p\n",(raizArbol->hijoDer)->hijoDer);
            }
        }

	ret = contarNodos(raizArbol);
	if (ret != 2) printf("(1.5) Practica INCORRECTA %d\n", ret);
	else printf("(1.5) Practica correcta \n");

	ret = aniadirNodo(&raizArbol, 'C');
	if (ret > 0 && raizArbol!= NULL) printf("(1.6) Practica correcta \n");
	else printf("(1.6) Practica INCORRECTA \n");

        ret = aniadirNodo(&(raizArbol), 'B');
	if (ret < 0 && raizArbol!= NULL) printf("(1.7) Practica correcta \n");
	else printf("(1.7) Practica INCORRECTA %d\n", ret);

	ret = borrarArbol(&raizArbol);
	if (ret < 0 || raizArbol!= NULL) printf("(1.8) Practica INCORRECTA\n");
	else printf("(1.8) Practica correcta \n");

        ret = 10;
	ret = contarNodos(raizArbol);
	if (ret != 0) printf("(1.9) Practica INCORRECTA \n");
	else printf("(1.9) Practica correcta \n");

	if (raizArbol != NULL) raizArbol = NULL; //Debería ser NULL
	ret = aniadirNodo(&raizArbol, 'A');
	if (ret < 0 || raizArbol== NULL) printf("(2.1) Practica INCORRECTA \n");
	else printf("(2.1) Practica correcta \n");

	ret = aniadirNodo(&raizArbol, 'B');
	if (ret < 0 || raizArbol== NULL) printf("(2.2) Practica INCORRECTA \n");
	else printf("(2.2) Practica correcta \n");

	ret = aniadirNodo(&raizArbol, 'C');
	if (ret > 0 &&raizArbol!= NULL) printf("(2.3) Practica correcta \n");
	else printf("(2.3) Practica INCORRECTA \n");

	ret = contarNodos(raizArbol);
	if (ret != 3) printf("(2.4) Practica INCORRECTA \n");
	else printf("(2.4) Practica correcta \n");

	ret = borrarArbol(&raizArbol);
	if (ret < 0 || raizArbol!= NULL) printf("(2.5) Practica INCORRECTA \n");
	else printf("(2.5) Practica correcta \n");

	ret = contarNodos(raizArbol);
	if (ret != 0) printf("(2.6) Practica INCORRECTA \n");
	else printf("(2.6) Practica correcta \n");

	// Cargar un arbol ----------------------------- //
	if (raizArbol != NULL) raizArbol = NULL; //Debería ser NULL
	ret = 0;
	ret += aniadirNodo(&raizArbol, 'H');
	ret += aniadirNodo(&raizArbol, 'M');
	ret += aniadirNodo(&raizArbol, 'E');
	// &(raizArbol->hijoIzq)
	ret += aniadirNodo(&(raizArbol), 'J');
	ret += aniadirNodo(&(raizArbol), 'L');
	// &(raizArbol->hijoDer)
	ret += aniadirNodo(&(raizArbol), 'S');
	ret += aniadirNodo(&(raizArbol), 'G');
	// &(raizArbol->hijoIzq->hijoIzq)
	ret += aniadirNodo(&(raizArbol), 'B');
	ret += aniadirNodo(&(raizArbol), 'I');
	// &(raizArbol->hijoIzq->hijoDer)
	ret += aniadirNodo(&(raizArbol), 'D');
	ret += aniadirNodo(&(raizArbol), 'Q');
	// &(raizArbol->hijoDer->hijoIzq)
	ret += aniadirNodo(&(raizArbol), 'C');
	ret += aniadirNodo(&(raizArbol), 'T');
	// &(raizArbol->hijoDer->hijoDer)
	ret += aniadirNodo(&(raizArbol), 'Z');
	ret += aniadirNodo(&(raizArbol), 'A');


	if (ret != 15) printf("(3.0) Practica INCORRECTA %d\n", ret);
	else printf("(3.0) Practica correcta \n");


	ret = contarNodos(raizArbol);
	if (ret != 15) printf("(3.1) Practica INCORRECTA %d\n", ret);
	else printf("(3.1) Practica correcta \n");

	char fd[200];
	fd[0]='\0';
	buscarPunto(raizArbol, fd);


	if(strcmp(fd, "H E B A D C G M J I L S Q T Z ")==0)
	  printf("(3.2) Comprobando estructura árbol Practica correcta \n");
	else printf("(3.2)  Comprobando estructura árbol  Practica INCORRECTA %s\n", fd);


	printf("\nAl recorrer in-orden el arbol binario los nodos salen ordenados \n\n");
	inorden(raizArbol);


        // FINAL ---------------------------------------------------- //
        ret = borrarArbol(&raizArbol);
	if (ret < 0 || raizArbol!= NULL) printf("(5.0) Practica INCORRECTA \n");
	else printf("\n(5.0) Practica correcta \n");



	return 0;
}


/* Cuenta el número de nodos del arbol con el id dado
 * [IN] nodo raiz de árbol
 * [IN] identificador del punto a buscar
 * [OUT] número de nodos del árbol
 * [RET] return: devuelve -1 si la operación no se ha podido realizar */
int buscarPunto(const Nodo_t* nodo, char *fd)
{
  int ret= -1;
  char temp[10];

  if(nodo==NULL)
  {
//      printf("Error en los parámetros de %s\n", __FUNCTION__);
      ret = -1;
  }
  else
  {
    sprintf(temp, "%c ", nodo->id);
    strcat(fd,temp);
    buscarPunto(nodo->hijoIzq, fd);
    buscarPunto(nodo->hijoDer, fd);


    ret= 1;
  }

    return ret;
}
