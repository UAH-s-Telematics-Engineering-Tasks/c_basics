/* Nombre Fichero: src/main.c */

#include "p9.h"

int main()
{

  BaseDatos_t myDB;
  struct timeval t_a, t_b;
  double diff = 0;

  crearBBDDbinario("bbddPeliculas.dat");

  cargarBBDDdesdeFichero(&myDB, "bbddPeliculas.dat");

  mostrarBBDDenPantallaDesdeFichero("bbddPeliculas.dat");

  printf("---------------------------------------\n");

  ordenarPorTitulo("bbddPeliculas.dat");

  mostrarBBDDenPantallaDesdeFichero("bbddPeliculas.dat");

  cargarBBDDdesdeFichero(&myDB, "bbddPeliculas.dat");

  if(compararBBDD(&myDB, 0)<0)
  {
    printf("\nPráctica no apta!!! No se han ordenado por Título \n");
      return 0;
   }

  printf("---------------------------------------\n");
  ordenarPorYear("bbddPeliculas.dat");
  mostrarBBDDenPantallaDesdeFichero("bbddPeliculas.dat");
  printf("---------------------------------------\n");

  cargarBBDDdesdeFichero(&myDB, "bbddPeliculas.dat");

  if(compararBBDD(&myDB, 1)<0)
  {
    printf("\nPráctica no apta!!! No se han ordenado por año \n");
      return 0;
   }

  gettimeofday(&t_a, NULL);
  ordenarPorNota("bbddPeliculas.dat");
  gettimeofday(&t_b, NULL);

  diff = (t_b.tv_sec - t_a.tv_sec) * 1000000; //To microseconds
  diff += (t_b.tv_usec - t_a.tv_usec); //Microseconds
  printf("##################################################\n");
  printf("Time difference in bubble sort: %g microseconds\n", diff);
  printf("##################################################\n");

  mostrarBBDDenPantallaDesdeFichero("bbddPeliculas.dat");

  cargarBBDDdesdeFichero(&myDB, "bbddPeliculas.dat");

   if(compararBBDD(&myDB, 2)<0)
   {
      printf("\nPráctica no apta!!! No se han ordenado por nota \n");
      return 0;
   }
  printf("---------------------------------------\n");
  gettimeofday(&t_a, NULL);
  grade_sort_insertion("bbddPeliculas.dat");
  gettimeofday(&t_b, NULL);

  diff = (t_b.tv_sec - t_a.tv_sec) * 1000000; //To microseconds
  diff += (t_b.tv_usec - t_a.tv_usec); //Microsecons
  printf("##################################################\n");
  printf("Time difference in insertion sort: %g microseconds\n", diff);
  printf("##################################################\n");

  mostrarBBDDenPantallaDesdeFichero("bbddPeliculas.dat");

  cargarBBDDdesdeFichero(&myDB, "bbddPeliculas.dat");

  if(compararBBDD(&myDB, 2)<0)
  {
     printf("\nPráctica no apta!!! No se han ordenado por nota \n");
     return 0;
  }

  printf("\nPráctica apta! \n");


  return 0;

}
