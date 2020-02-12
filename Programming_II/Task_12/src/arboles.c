/*
 * arboles.c
 *
 *  Created on: Jan 26, 2017
 *      Author: Departamento de Automática - UAH
 */

#include "arboles.h"

int aniadirNodo(Nodo_t** pp_cab, char id) { //We are only adding leaves!
  if (!pp_cab)
    return -1;
  if (!(*pp_cab)) {
    Nodo_t* new_node = (Nodo_t*) malloc(sizeof(Nodo_t));
    new_node->id = id;
    new_node->hijoDer = NULL;
    new_node->hijoIzq = NULL;
    *pp_cab = new_node;
    return 1;
  } //If there are no nodes
  if ((*pp_cab)->id > id)
    return aniadirNodo(&(*pp_cab)->hijoIzq, id); //We have to return the last value all the way back!

  else if ((*pp_cab)->id < id)
    return aniadirNodo(&(*pp_cab)->hijoDer, id);

  else //The id is the same!
    return -1;
  return 1;
}

int eliminarNodo(Nodo_t** pp_cab, char id) {
  if (!pp_cab || !(*pp_cab))
    return -1;
  if ((*pp_cab)->id == id) {
    if ((*pp_cab)->hijoIzq)
      eliminarNodo(&(*pp_cab)->hijoIzq, ((*pp_cab)->hijoIzq)->id);
    if ((*pp_cab)->hijoDer)
      eliminarNodo(&(*pp_cab)->hijoDer, ((*pp_cab)->hijoDer)->id);
    if (!((*pp_cab)->hijoIzq) && !((*pp_cab)->hijoDer)) {
      free(*pp_cab);
      *pp_cab = NULL; //Even though it's freed, the pointer is still holding the address!
      return 0;
    }
  }
  else if ((*pp_cab)->id > id)
    eliminarNodo(&(*pp_cab)->hijoIzq, id);
  else if ((*pp_cab)->id > id)
    eliminarNodo(&(*pp_cab)->hijoDer, id);
  return 0;
}

int contarNodos(const Nodo_t*p_cab) {
  if (!p_cab)
    return 0;
  return contarNodos(p_cab->hijoIzq) + contarNodos(p_cab->hijoDer) + 1;
}

int borrarArbol(Nodo_t** pp_cab) {
  if (!pp_cab || !(*pp_cab))
    return -1;
  return eliminarNodo(pp_cab, (*pp_cab)->id);
  //return 0;
}

void inorden(const Nodo_t * p_cab) {
  if (!p_cab)
    return;
  inorden(p_cab->hijoIzq);
  printf("%d\n", p_cab->id);
  inorden(p_cab->hijoDer);
  return;
}
