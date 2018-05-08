/* Nombre Fichero: src/lista.c */

#include "lista.h"

int aniadirPrincipio(Coche_t **pcab, const char *matricula) {
  if (!pcab || !matricula)
    return -1;
  Coche_t* aux_ptr = *pcab;
  Coche_t* new_element = (Coche_t*) malloc(sizeof(Coche_t));
  *pcab = new_element;
  (**pcab).sig = aux_ptr;
  strcpy((**pcab).matricula, matricula);
  return 0;
}

int listar(Coche_t *pcab) {
  if (!pcab)
    return -1;
  while(pcab) {
    printf("License plate: %s\n", (*pcab).matricula);
    pcab = (*pcab).sig; //pcab is just a copy, it won't have changed after listar() is pushed form the stack!
  }
  return 0;
}

int modificar(Coche_t **pcab, char *matricula, char *nueva) {
  if (!pcab || !matricula || !nueva)
    return -1;

  Coche_t* aux_ptr = *pcab; //We would modify pcab otherwise...
  int swch = 1;

  while(aux_ptr && swch) {
    if (!strcmp((*aux_ptr).matricula, matricula)) {
      printf("Modified value: %s", matricula);
      strcpy((*aux_ptr).matricula, nueva);
      swch--; //We don't "break" the logic
    }
    aux_ptr = (*aux_ptr).sig;
  }
  if (!swch)
    return 0;
  else
    return -1;
}

int borrarNodo(Coche_t **pcab, char *matricula) {
  if (!pcab || !matricula || !(*pcab))
    return -1;

  Coche_t* aux_ptr_f = NULL;
  Coche_t* aux_ptr_l = *pcab;
  int swch = 1;

  if (!strcmp((**pcab).matricula, matricula)) { //Special case!
    aux_ptr_f = *pcab;
    *pcab = (**pcab).sig;
    free(aux_ptr_f);
    return 0;
  }

  while (aux_ptr_l && swch) {
    if (!strcmp((*aux_ptr_l).matricula, matricula)) {
      (*aux_ptr_f).sig = (*aux_ptr_l).sig;
      free(aux_ptr_l);
      swch--;
    }
    aux_ptr_f = aux_ptr_l;
    aux_ptr_l = (*aux_ptr_l).sig;
  }
  if (!swch)
    return 0;
  else
    return -1;
}

Coche_t* buscarNodoAnt(Coche_t **pcab, char *matricula) {
  if (!pcab || !matricula)
    return NULL;

  Coche_t* aux_ptr_f = NULL;
  Coche_t* aux_ptr_l = *pcab;
  int swch = 1;

  while(aux_ptr_l && swch) {
    if (!strcmp((*aux_ptr_l).matricula, matricula))
      return aux_ptr_f;
    aux_ptr_f = aux_ptr_l;
    aux_ptr_l = (*aux_ptr_l).sig;
  }
  return NULL;
}

Coche_t* buscarNodo(Coche_t **pcab, char *matricula) {
  if (!pcab || !matricula)
    return NULL;

  Coche_t* aux_ptr = *pcab;
  int swch = 1;

  while(aux_ptr && swch) {
    if (!strcmp((*aux_ptr).matricula, matricula))
      return aux_ptr;
    aux_ptr = (*aux_ptr).sig;
  }
  return NULL;
}

int borrarAlPrincipio(Coche_t **pcab) {
  if (!pcab || !(*pcab))
    return -1;
  Coche_t* aux_ptr = *pcab;
  *pcab = (**pcab).sig;
  free(aux_ptr);
  return 0;
}

void liberarMemoria(Coche_t **pcab) {
    if (!pcab)
      return;
    while (*pcab) {
        borrarAlPrincipio(pcab);
    }
}

int aniadirOrdenado(Coche_t **pcab, char *matricula, int orden) {
  if (!pcab || !matricula || (orden != ASC && orden != DES))
    return -1;
  Coche_t* aux_ptr_f = *pcab;
  Coche_t* aux_ptr_l = (**pcab).sig;
  Coche_t* new_node = (Coche_t*) malloc(sizeof(Coche_t));
  strcpy(new_node->matricula, matricula);

  switch (orden) {
    case ASC: //The <= contemplates the case where two license plates are equal!!
      if (strcmp((**pcab).matricula, matricula) >= 0) { //Special case!
        aniadirPrincipio(pcab, matricula);
        free(new_node);
        return 0;
      }
      while (aux_ptr_l) {
        if (strcmp((*aux_ptr_f).matricula, matricula) <= 0 && strcmp((*aux_ptr_l).matricula, matricula) > 0) {
          (*aux_ptr_f).sig = new_node;
          (*new_node).sig = aux_ptr_l;
          return 0;
        }
        aux_ptr_f = aux_ptr_l;
        aux_ptr_l = (*aux_ptr_l).sig;
      }
      if (!aux_ptr_l) {
        (*aux_ptr_f).sig = new_node;
        (*new_node).sig = NULL;
        return 0;
      }
      break;
    case DES: //The <= contemplates the case where two license plates are equal!!
      if (strcmp((**pcab).matricula, matricula) <= 0) { //Special case!
        aniadirPrincipio(pcab, matricula);
        return 0;
      }
      while (aux_ptr_l) {
        if (strcmp((*aux_ptr_f).matricula, matricula) >= 0 && strcmp((*aux_ptr_l).matricula, matricula) < 0) {
          (*aux_ptr_f).sig = new_node;
          (*new_node).sig = aux_ptr_l;
          return 0;
        }
        aux_ptr_f = aux_ptr_l;
        aux_ptr_l = (*aux_ptr_l).sig;
      }
      if (!aux_ptr_l) {
        (*aux_ptr_f).sig = new_node;
        (*new_node).sig = NULL;
        return 0;
      }
      break;
  }
  return -1; //ERROR somewhere...
}

int ordenarLista(Coche_t **pcab, int orden) {
  if (!pcab || (orden != ASC && orden != DES))
    return -1;
  Coche_t* sorted_list = NULL;
  aniadirPrincipio(&sorted_list, (**pcab).matricula);
  borrarAlPrincipio(pcab);
  while (*pcab) {
    if (aniadirOrdenado(&sorted_list, (*pcab)->matricula, orden) == -1) {
        printf("Ordering WRONG\n");
        return -1;
    }
    borrarAlPrincipio(pcab);
  }
  *pcab = sorted_list;
  return 0;
}
