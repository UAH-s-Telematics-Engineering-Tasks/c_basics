/* Nombre Fichero: src/prog04.c */


#include "prog04.h"

/* funcion que permite rellenar el array de estructuras
 * [ IN] pbbdd, puntero a la estructura que contiene las ciudad
 * [ IN] nombre, nombre de la ciudad a introducir
 * [ IN] poblacion, poblacion de la ciudad a introducir
 * [RET] int, si se produce error devuelve un número negativo si no positivo */
int introducirCiudad(RegistroCiudades_t* pbbdd, const char* nombre, int poblacion)
{
  if (!pbbdd || !nombre)
    return -1;
  if (strlen(nombre) > MAX_NOMBRE - 1 || poblacion < 0)
    return -1;
  strcpy(pbbdd->ciudad[pbbdd->num_ciudades].nombre,nombre);
  pbbdd->ciudad[pbbdd->num_ciudades++].poblacion = poblacion;
  return 0;
}

/* funcion que muestra por pantalla una lista de todas las ciudad
 * [ IN] pbbdd, puntero a la estructura que contiene las ciudad
 * [RET] int, si se produce error devuelve un número negativo si no positivo */
int mostrarCiudades(RegistroCiudades_t* pbbdd)
{
  if (!pbbdd)
    return -1;
  printf("Nombre\tPoblacion\n");
  printf("======\t=========\n");
  for (unsigned int i = 0; i < pbbdd->num_ciudades; i++) {
    printf("%s\t", pbbdd->ciudad[i].nombre);
    printf("%d\n", pbbdd->ciudad[i].poblacion);
  }
  return 0;
}

/* funcion que muestra por pantalla una lista de todas las cuidades cuya poblacion sea inferior a 40000 habitantes
 * [ IN] pbbdd, puntero a la estructura que contiene las ciudad
 * [RET] return, numero de ciudad despobladas o si error número negativo */
int mostrarCiudadesDespobladas(RegistroCiudades_t* pbbdd)
{
  if (!pbbdd)
    return -1;
  int n_cities = 0;
  printf("Nombre\tPoblacion\n");
  printf("======\t=========\n");
  for (unsigned int i = 0; i < pbbdd->num_ciudades; i++)
    if (pbbdd->ciudad[i].poblacion < MIN_POBLACION) {
      printf("%s\t", pbbdd->ciudad[i].nombre);
      printf("%d\n", pbbdd->ciudad[i].poblacion);
      n_cities++;
  }
  return n_cities;
}

/* funcion que retorna el indice de la ciudad mas poblada
 * [ IN] pbbdd, puntero a la estructura que contiene las ciudad
 * [RET] return, indice de la cuidad mas poblada o si error número negativo */
int buscarCiudadMasPoblada(RegistroCiudades_t* pbbdd)
{
  if (!pbbdd)
    return -1;
  int max_poblacion = 0, r_index = 0;
  for (unsigned int i = 0; i < pbbdd->num_ciudades; i++)
    if (pbbdd->ciudad[i].poblacion > max_poblacion) {
      max_poblacion = pbbdd->ciudad[i].poblacion;
      r_index = i;
    }
  return r_index;
}

/* funcion que retorna la poblacion media de las ciudad
 * [ IN] pbbdd, puntero a la estructura que contiene las ciudad
 * [RET] return, poblacion media de las ciudad o si error número negativo */
float calcularPoblacionMedia(RegistroCiudades_t* pbbdd)
{
  if (!pbbdd)
    return -1;
  float average = 0;
  for (unsigned int i = 0; i < pbbdd->num_ciudades; i++)
    average += (float) pbbdd->ciudad[i].poblacion / pbbdd->num_ciudades; //Casting to flot gives us decimals!
  return average;
}

/* funcion que ordena las ciudad por poblacion de mayor a menor
 * [ IN] pbbdd, puntero a la estructura que contiene las ciudad
 * [ IN] orden, si es ASCENDENTE, ordenado de mayor a menor, si es DESCENDENTE ordenado de menor a mayor
 * [RET] return, si error número negativo */
int ordenarCiudadesPorPoblacion(RegistroCiudades_t* pbbdd,  ORDEN_t orden)
{
  if (!pbbdd || (orden != ASCENDENTE && orden != DESCENDENTE))
    return -1;
  Ciudad_t tmp;
  if (orden == ASCENDENTE) {
    for (unsigned int i = 0; i < pbbdd->num_ciudades - 1; i++)
      for (unsigned int j = 0; j < pbbdd->num_ciudades - (i + 1); j++)
        if (pbbdd->ciudad[j].poblacion > pbbdd->ciudad[j + 1].poblacion) {
          tmp = pbbdd->ciudad[j + 1];
          pbbdd->ciudad[j + 1] = pbbdd->ciudad[j];
          pbbdd->ciudad[j] = tmp;
        }
      }
  else if (orden == DESCENDENTE) {
    for (unsigned int i = 0; i < pbbdd->num_ciudades - 1; i++)
      for (unsigned int j = pbbdd->num_ciudades - 1; j > i; j--)
        if (pbbdd->ciudad[j].poblacion > pbbdd->ciudad[j - 1].poblacion) {
          tmp = pbbdd->ciudad[j - 1];
          pbbdd->ciudad[j - 1] = pbbdd->ciudad[j];
          pbbdd->ciudad[j] = tmp;
        }
    }
  return 0;
}
