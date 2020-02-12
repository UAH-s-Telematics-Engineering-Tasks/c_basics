/* Nombre Fichero: src/prog05.c */

#include "prog05.h"


/* funcion que inicializa el array de punteros apuntando a cada una de los elementos del array de estructuras
 * [ IN] p_bbdd, array de estructuras donde se encuentran los clientes
 * [OUT] pp_clientes, array de punteros de estructuras
 * [RET] return, si error número negativo */
int inicializarPunteros(RegistroClientes_t* p_bbdd, Cliente_t** pp_clientes)
{
  if (!p_bbdd || !pp_clientes)
    return -1;
  //for (unsigned int i = 0; i < p_bbdd->num_clientes; i++)
    for (unsigned int i = 0; i < MAX_ARRAY; i++)
      pp_clientes[i] = &(p_bbdd->cliente[i]);
  return 0;
}

/* funcion que permite introducir la informacion en la estructura de clientes
 * [ IN] p_bbdd, puntero a la estructura donde se encuentran los clientes
 * [ IN] nombre, nombre del cliente a introducir
 * [ IN] apellido, apellido del cliente a introducir
 * [ IN] ingresos, ingresos del cliente a introducir
 * [RET] return, si error número negativo */
int introducirCliente(RegistroClientes_t *p_bbdd, char* nombre, char* apellido, float ingresos)
{
  if (!p_bbdd || !nombre || !apellido || ingresos < 0 || p_bbdd->num_clientes >= 500)
    return -1;
  int curr_client = p_bbdd->num_clientes;
  strcpy(p_bbdd->cliente[curr_client].nombre, nombre);
  strcpy(p_bbdd->cliente[curr_client].apellido, apellido);
  p_bbdd->cliente[curr_client].ingresos = ingresos;
  p_bbdd->num_clientes++;
  return 0;
}

/* funcion que muestra una lista de los datos a traves del array de datos
 * [ IN] p_bbdd, puntero a la estructura donde se encuentran los clientes
 * [RET] return, si error número negativo */
int mostrarDatosArrayEstructuras(const RegistroClientes_t* p_bbdd)
{
  if (!p_bbdd)
    return -1;
  printf("Nombre\tApellido\tIngresos\n");
  printf("------\t--------\t--------\n");
  for (unsigned int i = 0; i < p_bbdd->num_clientes; i++) {
    printf("%s\t", p_bbdd->cliente[i].nombre);
    printf("%s\t", p_bbdd->cliente[i].apellido);
    printf("%g\n", p_bbdd->cliente[i].ingresos);
  }
  return 0;
}

/* funcion que muestra una lista de los datos a traves del array de punteros
 * [ IN] p_bbdd, puntero al array de punteros a clientes
 * [ IN] n, numero de datos introducidos en el array
 * [RET] return, si error número negativo */
int mostrarDatosArrayPunteros(Cliente_t** pp_clientes, int n)
{
  if (!pp_clientes || n <= 0 || n > MAX_ARRAY)
    return -1;
  printf("Nombre\tApellido\tIngresos\n");
  printf("------\t--------\t--------\n");
  for (int i = 0; i < n; i++) {
    printf("%s\t", (*(pp_clientes + i))->nombre);
    printf("%s\t", pp_clientes[i]->apellido);
    printf("%g\n", pp_clientes[i]->ingresos);
  }
  return 0;
}

/* funcion que calcula al varianza del campo ingresos a traves del array de datos
 * [ IN] p_bbdd, puntero a la estructura donde se encuentran los clientes
 * [RET] return, valor de la varianza del campo ingresos o codigos de error con valor negativo */
float calcularVarianzaIngresosArrayEstructuras(const RegistroClientes_t* p_bbdd)
{
  if (!p_bbdd)
    return -1;
  unsigned int total_data = p_bbdd->num_clientes;
  float mean = 0, variance = 0;
  for (unsigned int i = 0; i < total_data; i++)
    mean += p_bbdd->cliente[i].ingresos / total_data;
  for (unsigned int i = 0; i < total_data; i++)
    //variance += pow(p_bbdd->cliente[i].ingresos - mean, 2);
    variance += (p_bbdd->cliente[i].ingresos - mean) * (p_bbdd->cliente[i].ingresos - mean);
  return variance / total_data;
}

/* funcion que ordena el array de punteros de forma que coincida con el orden alfabetico de campo nombre
 * [ IN] p_bbdd, puntero al array de punteros a clientes
 * [ IN] n, numero de datos introducidos en el array
 * [RET] return, si error número negativo */
int ordenarPorNombreArrayPunterosBurbuja(Cliente_t** pp_clientes, int n)
{
  if (!pp_clientes || n <= 0 || n > MAX_ARRAY)
    return -1;
  Cliente_t* tmp;
  int chk = 1;
  for (int i = 0; i < n - 1 && chk; i++) {
    chk = 0;
    for (int k = 0; k < n - (i + 1); k++)
      if (strcmp(pp_clientes[k]->nombre, pp_clientes[k + 1]->nombre) > 0) {
        tmp = pp_clientes[k + 1];
        pp_clientes[k + 1] = pp_clientes[k];
        pp_clientes[k] = tmp;
        chk = 1;
    }
  }
  return 0;
}

/* funcion que ordena el array de punteros de forma que coincida con el orden alfabetico de campo nombre
 * [ IN] p_bbdd, puntero al array de punteros a clientes
 * [ IN] n, numero de datos introducidos en el array
 * [RET] return, si error número negativo */
int ordenarPorNombreArrayPunterosInsercion(Cliente_t** pp_clientes, int n)
{
  if (!pp_clientes || n <= 0 || n > MAX_ARRAY)
    return -1;
  //char* tmp = NULL;
  Cliente_t* tmp = NULL;
  int aux_pos;
  for (int i = 1; i < n; i++) {
    aux_pos = i - 1;
    tmp = pp_clientes[i];
    while (strcmp(tmp->nombre, pp_clientes[aux_pos]->nombre) < 0 && aux_pos >= 0) {
      pp_clientes[aux_pos + 1] = pp_clientes[aux_pos];
      aux_pos--;
    }
    pp_clientes[aux_pos + 1] = tmp;
  }
  return 0;
}
