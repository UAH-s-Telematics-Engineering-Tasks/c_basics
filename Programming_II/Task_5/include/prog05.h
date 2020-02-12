/* Nombre Fichero: include/prog05.h */


#ifndef PROG05_H
#define PROG05_H

// Librerias
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


// Definicion de constantes
#define MAX_NOMBRE 20
#define MAX_APELLIDO 30
#define MAX_ARRAY  500


/* RECUERDE
 * NO MODIFIQUE LOS NOMBRES DE LAS FUNCIONES NI EL NOMBRE DE LOS ARGUMENTOS
 * NO AÑADA PARAMETROS A LAS FUNCIONES */


// Declaracion de tipos

typedef struct {
    char nombre[MAX_NOMBRE];
    char apellido[MAX_APELLIDO];
    float ingresos;
} Cliente_t;


typedef struct {
  Cliente_t cliente[MAX_ARRAY];
  unsigned int num_clientes;
} RegistroClientes_t;


// Declaracion de los prototipos de las funciones

/* funcion que inicializa el array de punteros apuntando a cada una de los elementos del array de estructuras
 * [ IN] p_bbdd, array de estructuras donde se encuentran los clientes
 * [OUT] pp_clientes, array de punteros de estructuras
 * [RET] return, si error número negativo */
int inicializarPunteros(RegistroClientes_t* p_bbdd, Cliente_t** pp_clientes);

/* funcion que permite introducir la informacion en la estructura de clientes
 * [ IN] p_bbdd, puntero a la estructura donde se encuentran los clientes
 * [ IN] nombre, nombre del cliente a introducir
 * [ IN] apellido, apellido del cliente a introducir 
 * [ IN] ingresos, ingresos del cliente a introducir
 * [RET] return, si error número negativo */
int introducirCliente(RegistroClientes_t *p_bbdd, char* nombre, char* apellido, float ingresos);

/* funcion que muestra una lista de los datos a traves del array de datos
 * [ IN] p_bbdd, puntero a la estructura donde se encuentran los clientes
 * [RET] return, si error número negativo */
int mostrarDatosArrayEstructuras(const RegistroClientes_t* p_bbdd);

/* funcion que muestra una lista de los datos a traves del array de punteros
 * [ IN] p_bbdd, puntero al array de punteros a clientes
 * [ IN] n, numero de datos introducidos en el array
 * [RET] return, si error número negativo */
int mostrarDatosArrayPunteros(Cliente_t** pp_clientes, int n);

/* funcion que calcula al varianza del campo ingresos a traves del array de datos
 * [ IN] p_bbdd, puntero a la estructura donde se encuentran los clientes
 * [RET] return, valor de la varianza del campo ingresos o codigos de error con valor negativo */
float calcularVarianzaIngresosArrayEstructuras(const RegistroClientes_t* p_bbdd);

/* funcion que ordena el array de punteros de forma que coincida con el orden alfabetico de campo nombre
 * [ IN] p_bbdd, puntero al array de punteros a clientes
 * [ IN] n, numero de datos introducidos en el array
 * [RET] return, si error número negativo */
int ordenarPorNombreArrayPunterosBurbuja(Cliente_t** pp_clientes, int n);

/* funcion que ordena el array de punteros de forma que coincida con el orden alfabetico de campo nombre
 * [ IN] p_bbdd, puntero al array de punteros a clientes
 * [ IN] n, numero de datos introducidos en el array
 * [RET] return, si error número negativo */
int ordenarPorNombreArrayPunterosInsercion(Cliente_t** pp_clientes, int n);


#endif