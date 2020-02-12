/* Nombre Fichero: src/temperaturas.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "temperaturas.h"

//Commented lines were used for a realloc approach in memory allocation
//We cannot free() the allocated memory for the main array in our functions. We suppose it is done in main()

int leerFichero(const char* nombreRead, dateTemp_t** datos, int* numDatos, int* numLineasIncorrectas) {
  if (!nombreRead || !datos || !numDatos || !numLineasIncorrectas)
    return -1;
  FILE* pf = NULL;
  dateTemp_t t_s;
  int n_dat = 0;
  if (!(pf = fopen(nombreRead, "r")))
    return -1;
  //*datos = (dateTemp_t*) malloc(sizeof(dateTemp_t));
  char aux_str[LONG_NOMBRE] = {0};
  fgets(aux_str, LONG_NOMBRE, pf);
  fseek(pf, 0, SEEK_END);
  *datos = (dateTemp_t*) calloc(ftell(pf)/strlen(aux_str),sizeof(dateTemp_t));
  rewind(pf);
  while (!feof(pf) && !ferror(pf)) {
    fscanf(pf, "%d-%d-%d\t%f\n", &t_s.momento.anyo, &t_s.momento.mes, &t_s.momento.dia, &t_s.temperatura);
    if (t_s.momento.anyo < 1988 || t_s.momento.anyo > 1991 || t_s.momento.mes < 1 || t_s.momento.mes > 12)
      (*numLineasIncorrectas)++;
    else if (t_s.momento.dia < 0 || t_s.momento.dia > 31 || t_s.temperatura < -100 || t_s.temperatura > 100)
      (*numLineasIncorrectas)++;
    else {
      (*datos)[n_dat] = t_s;
      n_dat++;
      //*datos = (dateTemp_t*) realloc(sizeof(dateTemp_t) * n_dat + 1);
    }
  }
  fclose(pf);
  *numDatos = n_dat;
  return 0;
}

int calcularTempMaxima(const dateTemp_t* datos, int numDatos, float* temp_max, struct fecha_t* diaM) {
  if (!datos || !numDatos || !temp_max || !diaM)
    return -1;
  struct fecha_t aux_date;
  float curr_tmp = datos[0].temperatura;
  for (int i = 1; i < numDatos; i++)
    if (datos[i].temperatura > curr_tmp) {
      curr_tmp = datos[i].temperatura;
      aux_date = datos[i].momento;
    }
  *diaM = aux_date;
  *temp_max = curr_tmp;
  return 0;
}

int calcularTempMinima(const dateTemp_t* datos, int numDatos, float* temp_min, struct fecha_t* diaM) {
  if (!datos || !numDatos || !temp_min || !diaM)
    return -1;
  struct fecha_t aux_date;
  float curr_tmp = datos[0].temperatura;
  for (int i = 1; i < numDatos; i++)
    if (datos[i].temperatura < curr_tmp) {
      curr_tmp = datos[i].temperatura;
      aux_date = datos[i].momento;
    }
  *diaM = aux_date;
  *temp_min = curr_tmp;
  return 0;
}

int calcularTempMedia(const dateTemp_t* datos, int numDatos, float* temp) {
  if (!datos || !numDatos || !temp)
    return -1;
  float avg_tmp = 0;
  for (int i = 0; i < numDatos; i++)
    avg_tmp += datos[i].temperatura / numDatos;

  *temp = avg_tmp;
  return 0;
}

int guardarFichero(const dateTemp_t* datos, int numDatos, const char* nombre) {
  if (!datos || !nombre || !numDatos)
    return -1;
  FILE* pf = NULL;
  if (!(pf = fopen(nombre, "w")))
    return -1;
  for (int i = 0; i < numDatos; i++) {
    fprintf(pf, "%d-%d-%d\t%f\n", datos[i].momento.anyo, datos[i].momento.mes, datos[i].momento.dia, datos[i].temperatura);
  }
  fclose(pf);
  return 0;
}

int modificarRegistro(dateTemp_t** datos, int numDatos, struct fecha_t diaM, float temp) {
  if (!datos || !numDatos || diaM.anyo > 1991 || diaM.anyo < 1988 || temp > 100 || temp < -100)
    return -1;
  int stop = 0;
  for (int i = 0; i < numDatos && !stop; i++)
    if ((*datos)[i].momento.dia == diaM.dia) //We reduce runtime, as the checks are exclusive!
      if ((*datos)[i].momento.mes == diaM.mes)
        if ((*datos)[i].momento.anyo == diaM.anyo) {
          (*datos)[i].temperatura = temp;
          stop++;
        }
  return 0;
}
