/* Nombre Fichero: src/estadisticas.c */

#include "estadisticas.h"

int calcularMayor(const double *p,  int num_elem, double *pmayor)
{
  if (num_elem <= 0 || !p || !pmayor) {
    //printf("ERROR!!"); //Debugging!
    return -1;
  }
  else {
    *pmayor = *p; //Initial value
    for (int i = 0; i < num_elem; i++) {
      if (p[i] > *pmayor)
        *pmayor = p[i];
  }
}
  return 1; //OK
}

int calcularMenor(const double *p, int num_elem, double *pmenor)
{
  if (num_elem <= 0 || !p || !pmenor) {
    //printf("ERROR!!"); //Debugging!
    return -1;
  }
  else {
  *pmenor = p[0]; // p[0] == *p
    for (int i = 0; i < num_elem; i++) {
      if (p[i] < *pmenor)
        *pmenor = p[i];
    }
  }
  return 1;
}

int calcularMedia(const double *p, int num_elem, double *pmedia)
{
  if (num_elem <= 0 || !p || !pmedia) {
    //printf("ERROR!!"); //Debugging!
    return -1;
  }
  else {
    *pmedia = 0; //Initialize it just in case
    for (int i = 0; i < num_elem; i++)
      *pmedia += p[i] / num_elem;
    }
  return 1;
}

int calcularVar(const double *p, int num_elem, double media, double *pvar)
{
  if (num_elem <= 0 || !p || !pvar) {
    //printf("ERROR!!"); //Debugging!
    return -1;
  }
  else {
    *pvar = 0; //Initialize, just in case
    for (int i = 0; i < num_elem; i++)
      *pvar += pow(p[i] - media, 2);
    *pvar /= num_elem;
  }
  return 1;
}
/* num_elem is not needed in this function, as it is the sqrt() of the variance alone, thus, the check
num_elem <= 0 is not really needed, but as it should be greater than 0 throughout the program, we will
leave it there*/
int calcularDesviacionTipica(double var, int num_elem, double *pdesviacionTipica)
{
  if (num_elem <= 0 || !pdesviacionTipica || var < 0) {
    //printf("ERROR!!");   //Debugging!                 //Var has to be >0 in order to do a sqrt()!
    return -1;
  }
  else
    *pdesviacionTipica = sqrt(var); //var is double, ok with sqrt() function!
  return 1;
}
