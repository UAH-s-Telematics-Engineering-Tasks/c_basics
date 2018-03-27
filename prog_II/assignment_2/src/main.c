 /* Nombre Fichero: src/main.c */

#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#include "estadisticas.h"
#include "float.h"
// DBL_MAX está definido en float.h y es una constante con el máximo valor de una variable tipo double


#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"


int main(int argc, char *argv[])
{
  const int num_elem = N;
  const double datos[N]={ 5.6, 7.5, 9.1, 15.3, 17.9, 18.2, 22.9, 28.4, 31.8, 32.6 };
  const double datos2[N]={ DBL_MAX, DBL_MAX, DBL_MAX, DBL_MAX, DBL_MAX, DBL_MAX,DBL_MAX ,DBL_MAX ,DBL_MAX ,DBL_MAX};
  const double datos3[N]={ -DBL_MAX, -DBL_MAX, -DBL_MAX, -DBL_MAX, -DBL_MAX, -DBL_MAX, -DBL_MAX , -DBL_MAX , -DBL_MAX , -DBL_MAX};
  double temperaturas[N];
  double mayor = 0.0;
  double menor = 0.0;
  double media = 0.0;
  double var = 0.0;
  double desviacionTipica = 0.0;
  int i = 0;
  int ret = 0;
  char *TxtError1 = ANSI_COLOR_RED "\n\nPráctica incorrecta. Fichero %s línea %d\n" ANSI_COLOR_RESET;

  if(argc >1)
      argv[0]=NULL;

  // Las MACROS predefinidas __FILE__  y  __LINE__ son sustituidas por el compilador al compilar
  //  por el nombre del fichero y el número de línea respectivamente
  if (copiarArray(NULL, num_elem, datos)>=0)
  {
      printf(TxtError1,  __FILE__, __LINE__);

      if(argc > 1)
          exit(-1);

  }
  else
  {
      printf("\n\nTest OK parámetros copiarArray Fichero %s línea %d\n",  __FILE__, __LINE__);
  }

  if (copiarArray(temperaturas, -5, datos)>=0)
  {
      printf(TxtError1,  __FILE__, __LINE__);

      if(argc > 1)
          exit(-1);
  }
  else
  {
      printf("\n\nTest OK parámetros copiarArray Fichero %s línea %d\n",  __FILE__, __LINE__);
  }

  if(copiarArray(temperaturas, num_elem, NULL)>=0)
  {
     printf(TxtError1,  __FILE__, __LINE__);

     if(argc > 1)
          exit(-1);

  }
  else
  {
     printf("\n\nTest OK parámetros copiarArray Fichero %s línea %d\n",  __FILE__, __LINE__);
  }

  ret = copiarArray(temperaturas, num_elem, datos);

  if (ret < 0)
  {
      printf(TxtError1,  __FILE__, __LINE__);

     if(argc > 1)
          exit(-1);

  }
  else
  {
     printf("\n\nTest OK parámetros copiarArray Fichero %s línea %d\n",  __FILE__, __LINE__);
  }

  for (i = 0; i < N; i++)
  {

  	if (datos[i]!=temperaturas[i])
	{
	  printf(TxtError1,  __FILE__, __LINE__);

          if(argc > 1)
            exit(-1);


  	}
	else
	{
          printf("\n\nDato %d introducido correctamente\n", i);
	}

  }



  if (imprimirArray(NULL, num_elem)>=0)
  {
      printf(TxtError1,  __FILE__, __LINE__);

     if(argc > 1)
          exit(-1);

  }
  else
  {
     printf("\n\nTest OK parámetros imprimirArray Fichero %s línea %d\n",  __FILE__, __LINE__);
  }



  if (imprimirArray(temperaturas, 0) >=0)
  {
      printf(TxtError1,  __FILE__, __LINE__);

     if(argc > 1)
          exit(-1);

  }
  else
  {
     printf("\n\nTest OK parámetros imprimirArray Fichero %s línea %d\n",  __FILE__, __LINE__);
  }



  ret = imprimirArray(temperaturas, num_elem);

  if (ret < 0)
  {
      printf(TxtError1,  __FILE__, __LINE__);

     if(argc > 1)
          exit(-1);

  }
  else
  {
     printf("\n\nTest OK return imprimirArray Fichero %s línea %d\n",  __FILE__, __LINE__);
  }



  if(calcularMayor(NULL, num_elem, &mayor) >= 0)
  {
      printf(TxtError1,  __FILE__, __LINE__);

     if(argc > 1)
          exit(-1);

  }
  else
  {
     printf("\n\nTest OK parámetros calcularMayor Fichero %s línea %d\n",  __FILE__, __LINE__);
  }


   if(calcularMayor(temperaturas, 0, &mayor) >= 0)
   {
      printf(TxtError1,  __FILE__, __LINE__);

     if(argc > 1)
          exit(-1);


   }
  else
  {
     printf("\n\nTest OK parámetros calcularMayor Fichero %s línea %d\n",  __FILE__, __LINE__);
  }



  ret = calcularMayor(temperaturas, num_elem, &mayor);

  printf("\n\tMayor = %lf\n", mayor);

  if (ret < 0 ||  mayor != 32.6 )
  {
      printf(ANSI_COLOR_RED "\n\nPráctica incorrecta. Mayor mal calculado. Fichero %s línea %d\n"ANSI_COLOR_RESET,  __FILE__, __LINE__);

     if(argc > 1)
          exit(-1);

  }


  if(calcularMenor(NULL, num_elem, &menor) >= 0)
  {
      printf(TxtError1,  __FILE__, __LINE__);

     if(argc > 1)
          exit(-1);

  }
  else
  {
     printf("\n\nTest OK parámetros calcularMenor Fichero %s línea %d\n",  __FILE__, __LINE__);
  }



   if(calcularMenor(temperaturas, 0, &menor) >= 0)
   {
      printf(TxtError1,  __FILE__, __LINE__);

     if(argc > 1)
          exit(-1);

   }
   else
  {
     printf("\n\nTest OK parámetros calcularMenor Fichero %s línea %d\n",  __FILE__, __LINE__);
  }


  ret = calcularMenor(temperaturas, num_elem, &menor);

  printf("\n\tMenor = %lf\n", menor);

  if (ret == 0 ||  menor != 5.6 )
  {
      printf(ANSI_COLOR_RED"\n\nPráctica incorrecta. Menor mal calculado. Fichero %s línea %d\n"ANSI_COLOR_RESET,  __FILE__, __LINE__);

     if(argc > 1)
          exit(-1);
  }


  if(calcularMedia(NULL, num_elem, &media) >= 0)
  {
      printf(TxtError1,  __FILE__, __LINE__);

     if(argc > 1)
          exit(-1);
  }
   else
  {
     printf("\n\nTest OK parámetros calcularMedia Fichero %s línea %d\n",  __FILE__, __LINE__);
  }

  if(calcularMedia(temperaturas, -1, &media) >= 0)
  {
     printf(ANSI_COLOR_RED"\n\nPráctica incorrecta.  Fichero %s línea %d\n"ANSI_COLOR_RESET,  __FILE__, __LINE__);

     if(argc > 1)
          exit(-1);

  }
   else
  {
     printf("\n\nTest OK parámetros calcularMedia Fichero %s línea %d\n",  __FILE__, __LINE__);
  }



  ret = calcularMedia(temperaturas, num_elem, &media);

  printf("\n\tMedia = %lf\n", media);

  if (ret < 0 || media != 18.93)
  {
      printf(ANSI_COLOR_RED"\n\nPráctica incorrecta. Media mal calculada. Fichero %s línea %d\n"ANSI_COLOR_RESET,  __FILE__, __LINE__);

     if(argc > 1)
          exit(-1);

  }



  if(calcularVar(NULL, num_elem, media, &var) >= 0)
  {
      printf(TxtError1,  __FILE__, __LINE__);

     if(argc > 1)
          exit(-1);

  }
   else
  {
     printf("\n\nTest OK parámetros calcularVar Fichero %s línea %d\n",  __FILE__, __LINE__);
  }


  if(calcularVar(temperaturas, 0, media, &var) >= 0)
    {
      printf(TxtError1,  __FILE__, __LINE__);

     if(argc > 1)
          exit(-1);

  }
  else
  {
     printf("\n\nTest OK parámetros calcularVar Fichero %s línea %d\n",  __FILE__, __LINE__);
  }

  ret = calcularVar(temperaturas, num_elem, media, &var);

  printf("\n\tVar = %lf\n", var);

  if (ret < 0 ||  fabs(var -  87.7681) > 0.01)
  {
      printf(ANSI_COLOR_RED"\n\nPráctica incorrecta. Varianza mal calculada. Fichero %s línea %d\n"ANSI_COLOR_RESET,  __FILE__, __LINE__);

     if(argc > 1)
          exit(-1);

  }


 if(calcularDesviacionTipica(-10, num_elem, &desviacionTipica) >= 0)
   {
      printf(TxtError1,  __FILE__, __LINE__);

      if(argc > 1)
          exit(-1);

  }
  else
  {
     printf("\n\nTest OK parámetros calcularDesviacionTipica Fichero %s línea %d\n",  __FILE__, __LINE__);
  }


   if(calcularDesviacionTipica(var, 0, &desviacionTipica) >= 0)
  {
      printf(TxtError1,  __FILE__, __LINE__);

      if(argc > 1)
          exit(-1);

  }
   else
  {
     printf("\n\nTest OK parámetros calcularDesviacionTipica Fichero %s línea %d\n",  __FILE__, __LINE__);
  }

  ret = calcularDesviacionTipica(var, num_elem, &desviacionTipica); //ret = 1
  
  printf("\n\tDesviación típica = %lf\n", desviacionTipica);

  if (ret < 0 || fabs(desviacionTipica - 9.368463)>0.01)
  {
      printf(ANSI_COLOR_RED"\n\nPráctica incorrecta. Desviación típica mal calculada. Fichero %s línea %d\n"ANSI_COLOR_RESET,  __FILE__, __LINE__);

     if(argc > 1)
          exit(-1);

  }


  ret = copiarArray(temperaturas, num_elem, datos2);

  if (ret < 0)
  {
      printf(TxtError1,  __FILE__, __LINE__);

     if(argc > 1)
          exit(-1);

  }


  ret = calcularMenor(temperaturas, num_elem, &menor);

  printf("\n\tMenor = %lf\n\n", menor);

  if (ret < 0 ||  menor != DBL_MAX)
  {
      printf(ANSI_COLOR_RED"\n\nPráctica incorrecta. Menor Mal calculada. Fichero %s línea %d\n"ANSI_COLOR_RESET,  __FILE__, __LINE__);

     if(argc > 1)
          exit(-1);

  }


  ret = copiarArray(temperaturas, num_elem, datos3);

  if (ret < 0)
  {
      printf(TxtError1,  __FILE__, __LINE__);


     if(argc > 1)
          exit(-1);

  }


  ret = calcularMayor(temperaturas, num_elem, &mayor);

  printf("\n\tMayor = %lf\n\n", mayor);

  if (ret < 0 ||  mayor != -DBL_MAX)
  {
      printf(ANSI_COLOR_RED"\n\nPráctica incorrecta. Mayor Mal calculada. Fichero %s línea %d\n"ANSI_COLOR_RESET,  __FILE__, __LINE__);
  }


  return 0;
}
