/* Nombre Fichero: src/main.c */

#include "prog04.h"
#include <sys/time.h>                // for gettimeofday()

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"


int validarLista(RegistroCiudades_t* pbbdd, int caso);


int main()
{
    RegistroCiudades_t bbdd;

    int ret = 0;
    float retF = 0;
    char *TxtError1 = ANSI_COLOR_RED "Error en implementacion de funcion introducirCiudad , línea %d del main, práctica no apta!!!\n" ANSI_COLOR_RESET;
    char *TxtError2 = ANSI_COLOR_RED "Error en implementacion de funcion mostrarCiudades, línea %d del main, práctica no apta!!!\n" ANSI_COLOR_RESET;
    char *TxtError3 = ANSI_COLOR_RED "Error en implementacion de funcion mostrarCiudadesDespobladas, línea %d del main, práctica no apta!!!\n" ANSI_COLOR_RESET;
    char *TxtError4 = ANSI_COLOR_RED "Error en implementacion de funcion buscarCiudadMasPoblada, línea %d del main, práctica no apta!!!\n" ANSI_COLOR_RESET;
    char *TxtError5 = ANSI_COLOR_RED "Error en implementacion de funcion calcularPoblacionMedia, línea %d del main, práctica no apta!!!\n" ANSI_COLOR_RESET;
    char *TxtError6 = ANSI_COLOR_RED "Error en implementacion de funcion ordenarCiudadesPorPoblacion, línea %d del main, práctica no apta!!!\n" ANSI_COLOR_RESET;
    char *TxtError7 =  "Comprobación de parámetros funcion introducirCiudad correcta, línea %d del main\n";

    bbdd.num_ciudades=0;

    printf("\nComprobando parámetros de introducirCiudad en línea %d\n",__LINE__);

    ret = introducirCiudad(0, "Cáceres", 1500);
    if (ret >= 0) {
        printf(TxtError1, __LINE__);
    }
    else
	printf(TxtError7, __LINE__);

    ret = introducirCiudad(&bbdd, "CáceresMAX_ARRAYMAX_ARRAY_ARRAYMAX_ARRAY", 1500);
    if (ret >= 0) {
        printf(TxtError1, __LINE__);
    }
    else
	printf(TxtError7, __LINE__);

    ret = introducirCiudad(&bbdd, "Cáceres", -1500);
    if (ret >= 0) {
        printf(TxtError1, __LINE__);
    }
    else
	printf(TxtError7, __LINE__);

    printf("\nParámetros de introducirCiudad en línea %d correctos\n\n\n",__LINE__);

    ret = introducirCiudad(&bbdd, "Albacete",172426);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Alicante",330525);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Almería",194515);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Ávila",58083);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Badajoz",149946);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Barcelona",1608746);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Bilbao",345122);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Burgos",176608);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Cáceres",95814);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Cádiz",118919);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Castellón de la Plana",170990);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Ceuta",84963);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Ciudad Real",74057);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Córdoba",326609);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Cuenca",55102);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Gerona",98255);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Granada",234758);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Guadalajara",83633);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Huelva",144468);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Huesca",52282);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Jaén",114658);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "La Coruña",243978);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Las Palmas de Gran Canaria",378998);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "León",126192);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Lérida",138144);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Logroño",150876);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Lugo",98268);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Madrid",3165541);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Málaga",569009);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Melilla",86026);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Mérida",59174);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Murcia",441003);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Orense",105893);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Oviedo",220585);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Palencia",79137);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Palma",402949);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Pamplona",195650);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Pontevedra",82459);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Salamanca",144949);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "San Sebastián",186064);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Santa Cruz de Tenerife",208000);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Santander",172656);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Santiago de Compostela",95966);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Segovia",53257);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Sevilla",690566);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Soria",39171);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Tarragona",131094);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Teruel",35564);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Toledo",83459);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Valencia",790201);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Valladolid",301876);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Vitoria",244634);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Zamora",63217);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);


ret = introducirCiudad(&bbdd, "Zaragoza",661108);
if (ret < 0) {
 printf(TxtError1, __LINE__);
return -1;
}
else
printf("IntroducirCiudad correcto en línea %d", __LINE__);

    printf("\nComprobando parámetros de mostrarCiudades en línea %d\n",__LINE__);

    ret = mostrarCiudades(NULL);
    if (ret > 0) {
        printf(TxtError2, __LINE__);
        return -1;;
    }
   else
    printf("\nParámetros de mostrarCiudades en línea %d correctos\n\n\n",__LINE__);

    ret = mostrarCiudades(&bbdd);
    if (ret < 0) {
        printf(TxtError2, __LINE__);
        return -1;;
    }

    printf("\nComprobando parámetros de mostrarCiudadesDespobladas en línea %d\n",__LINE__);

    ret = mostrarCiudadesDespobladas(NULL);
    if (ret > 0) {
        printf(TxtError3,  __LINE__);
        return -1;;
    }
    else
      printf("\nParámetros de mostrarCiudadesDespobladas en línea %d correctos\n\n\n",__LINE__);

    printf("\nListado de ciudades despobaldas:\n");

    ret = mostrarCiudadesDespobladas(&bbdd);
    if (ret < 0 || ret !=2) {
        printf(TxtError3, __LINE__);
        return -1;;
    } else
        printf("Hay %d ciudades despobladas\n", ret);



    printf("\nComprobando parámetros de buscarCiudadMasPoblada en línea %d\n",__LINE__);

    ret = buscarCiudadMasPoblada(0);
    if (ret > 0) {
        printf(TxtError4,  __LINE__);
        return -1;;
    }
    else
      printf("\nParámetros de buscarCiudadMasPoblada en línea %d correctos\n\n\n",__LINE__);

    ret = buscarCiudadMasPoblada(&bbdd);
    if (ret < 0 || (strcmp(bbdd.ciudad[ret].nombre, "Madrid")!=0) || bbdd.ciudad[ret].poblacion!=3165541) {
        printf(TxtError4,  __LINE__);
        return -1;;
    } else
        printf("La ciudad mas poblada es %s con %d habitantes\n", bbdd.ciudad[ret].nombre, bbdd.ciudad[ret].poblacion);


   printf("\nComprobando parámetros de calcularPoblacionMedia en línea %d\n",__LINE__);


    retF = calcularPoblacionMedia(0);
    if (retF > 0) {
        printf(TxtError5, __LINE__);
        return -1;;
    }
    else
      printf("\nParámetros de calcularPoblacionMedia en línea %d correctos\n\n\n",__LINE__);


    retF = calcularPoblacionMedia(&bbdd);
    if (retF < 0  || (retF-280298.9375) > 0.01) {
        printf(TxtError5, __LINE__);
        return -1;;
    }
    else
        printf("\nLa poblacion media de las ciudades es: %.1f\n", retF);


   printf("\nComprobando parámetros de ordenarCiudadesPorPoblacion en línea %d\n",__LINE__);


    ret = ordenarCiudadesPorPoblacion(0, 1);
    if (ret > 0) {
        printf(TxtError6, __LINE__);
        return -1;;
    }
    else
       printf("\nParámetros de ordenarCiudadesPorPoblacion en línea %d correctos\n\n\n",__LINE__);

    struct timeval t1, t2;
    double elapsedTime;
    gettimeofday(&t1, NULL);
    ret = ordenarCiudadesPorPoblacion(&bbdd, DESCENDENTE);
    gettimeofday(&t2, NULL);

    elapsedTime = (t2.tv_sec - t1.tv_sec) * 1000.0;      // sec to ms
    elapsedTime += (t2.tv_usec - t1.tv_usec) / 1000.0;   // us to ms

    printf(ANSI_COLOR_GREEN"\n\n\tTiempo empleado en ordenar %lf ms\n\n"ANSI_COLOR_RESET, elapsedTime);

    if (ret < 0) {
        printf(TxtError6, __LINE__);
        return -1;;
    } else {
        printf("\nCiudades ordenadas por poblacion descendente:\n");
        ret = mostrarCiudades(&bbdd);
        if (ret < 0) {
            printf(TxtError2, ret);
            return -1;;
        }

        ret = validarLista(&bbdd, 0);
        if (ret == 1)
	{
	  printf("\n\n\tOrdenación descendente OK\n");
	}
	else
	{
	  printf(ANSI_COLOR_RED "Error en %s en la línea %d, Ordenación descendente errónea,  práctica no apta!!!!\n" ANSI_COLOR_RESET,  __FILE__, __LINE__);
	  return -1;
	}


    }

    gettimeofday(&t1, NULL);
    ret = ordenarCiudadesPorPoblacion(&bbdd, ASCENDENTE);
    gettimeofday(&t2, NULL);

    elapsedTime = (t2.tv_sec - t1.tv_sec) * 1000.0;      // sec to ms
    elapsedTime += (t2.tv_usec - t1.tv_usec) / 1000.0;   // us to ms

    printf(ANSI_COLOR_GREEN"\n\n\tTiempo empleado en ordenar %lf ms\n\n"ANSI_COLOR_RESET, elapsedTime);

    if (ret < 0) {
        printf(TxtError6, __LINE__);
        return -1;;
    } else {
        printf("\nCiudades ordenadas por poblacion ascendente:\n");
        ret = mostrarCiudades(&bbdd);
        if (ret < 0) {
            printf(TxtError2, __LINE__);
            return -1;;
        }

        ret = validarLista(&bbdd, 1);
        if (ret == 1)
	{
	  printf("\n\n\tOrdenación ascendente OK\n");
	}
	else
	{
	  printf(ANSI_COLOR_RED "Error en %s en la línea %d, Ordenación ascendente errónea,  práctica no apta!!!!\n" ANSI_COLOR_RESET,  __FILE__, __LINE__);
	  return -1;
	}
    }

    return 0;
}



/*Función para validar el contenido de la lista en cada prueba.
  YA ESTA IMPLEMENTADA */
int validarLista(RegistroCiudades_t* pbbdd, int caso)
{
    int ret = -1;
    int comparaciones = 0;

    switch ( caso )
    {
        case 0:
          comparaciones = 0;

if (strcmp(pbbdd->ciudad[0].nombre,"Madrid")==0 && pbbdd->ciudad[0].poblacion==3165541)
  comparaciones++;

if (strcmp(pbbdd->ciudad[1].nombre,"Barcelona")==0 && pbbdd->ciudad[1].poblacion==1608746)
  comparaciones++;

if (strcmp(pbbdd->ciudad[2].nombre,"Valencia")==0 && pbbdd->ciudad[2].poblacion==790201)
  comparaciones++;

if (strcmp(pbbdd->ciudad[3].nombre,"Sevilla")==0 && pbbdd->ciudad[3].poblacion==690566)
  comparaciones++;

if (strcmp(pbbdd->ciudad[4].nombre,"Zaragoza")==0 && pbbdd->ciudad[4].poblacion==661108)
  comparaciones++;

if (strcmp(pbbdd->ciudad[5].nombre,"Málaga")==0 && pbbdd->ciudad[5].poblacion==569009)
  comparaciones++;

if (strcmp(pbbdd->ciudad[6].nombre,"Murcia")==0 && pbbdd->ciudad[6].poblacion==441003)
  comparaciones++;

if (strcmp(pbbdd->ciudad[7].nombre,"Palma")==0 && pbbdd->ciudad[7].poblacion==402949)
  comparaciones++;

if (strcmp(pbbdd->ciudad[8].nombre,"Las Palmas de Gran Canaria")==0 && pbbdd->ciudad[8].poblacion==378998)
  comparaciones++;

if (strcmp(pbbdd->ciudad[9].nombre,"Bilbao")==0 && pbbdd->ciudad[9].poblacion==345122)
  comparaciones++;

if (strcmp(pbbdd->ciudad[10].nombre,"Alicante")==0 && pbbdd->ciudad[10].poblacion==330525)
  comparaciones++;

if (strcmp(pbbdd->ciudad[11].nombre,"Córdoba")==0 && pbbdd->ciudad[11].poblacion==326609)
  comparaciones++;

if (strcmp(pbbdd->ciudad[12].nombre,"Valladolid")==0 && pbbdd->ciudad[12].poblacion==301876)
  comparaciones++;

if (strcmp(pbbdd->ciudad[13].nombre,"Vitoria")==0 && pbbdd->ciudad[13].poblacion==244634)
  comparaciones++;

if (strcmp(pbbdd->ciudad[14].nombre,"La Coruña")==0 && pbbdd->ciudad[14].poblacion==243978)
  comparaciones++;

if (strcmp(pbbdd->ciudad[15].nombre,"Granada")==0 && pbbdd->ciudad[15].poblacion==234758)
  comparaciones++;

if (strcmp(pbbdd->ciudad[16].nombre,"Oviedo")==0 && pbbdd->ciudad[16].poblacion==220585)
  comparaciones++;

if (strcmp(pbbdd->ciudad[17].nombre,"Santa Cruz de Tenerife")==0 && pbbdd->ciudad[17].poblacion==208000)
  comparaciones++;

if (strcmp(pbbdd->ciudad[18].nombre,"Pamplona")==0 && pbbdd->ciudad[18].poblacion==195650)
  comparaciones++;

if (strcmp(pbbdd->ciudad[19].nombre,"Almería")==0 && pbbdd->ciudad[19].poblacion==194515)
  comparaciones++;

if (strcmp(pbbdd->ciudad[20].nombre,"San Sebastián")==0 && pbbdd->ciudad[20].poblacion==186064)
  comparaciones++;

if (strcmp(pbbdd->ciudad[21].nombre,"Burgos")==0 && pbbdd->ciudad[21].poblacion==176608)
  comparaciones++;

if (strcmp(pbbdd->ciudad[22].nombre,"Santander")==0 && pbbdd->ciudad[22].poblacion==172656)
  comparaciones++;

if (strcmp(pbbdd->ciudad[23].nombre,"Albacete")==0 && pbbdd->ciudad[23].poblacion==172426)
  comparaciones++;

if (strcmp(pbbdd->ciudad[24].nombre,"Castellón de la Plana")==0 && pbbdd->ciudad[24].poblacion==170990)
  comparaciones++;

if (strcmp(pbbdd->ciudad[25].nombre,"Logroño")==0 && pbbdd->ciudad[25].poblacion==150876)
  comparaciones++;

if (strcmp(pbbdd->ciudad[26].nombre,"Badajoz")==0 && pbbdd->ciudad[26].poblacion==149946)
  comparaciones++;

if (strcmp(pbbdd->ciudad[27].nombre,"Salamanca")==0 && pbbdd->ciudad[27].poblacion==144949)
  comparaciones++;

if (strcmp(pbbdd->ciudad[28].nombre,"Huelva")==0 && pbbdd->ciudad[28].poblacion==144468)
  comparaciones++;

if (strcmp(pbbdd->ciudad[29].nombre,"Lérida")==0 && pbbdd->ciudad[29].poblacion==138144)
  comparaciones++;

if (strcmp(pbbdd->ciudad[30].nombre,"Tarragona")==0 && pbbdd->ciudad[30].poblacion==131094)
  comparaciones++;

if (strcmp(pbbdd->ciudad[31].nombre,"León")==0 && pbbdd->ciudad[31].poblacion==126192)
  comparaciones++;

if (strcmp(pbbdd->ciudad[32].nombre,"Cádiz")==0 && pbbdd->ciudad[32].poblacion==118919)
  comparaciones++;

if (strcmp(pbbdd->ciudad[33].nombre,"Jaén")==0 && pbbdd->ciudad[33].poblacion==114658)
  comparaciones++;

if (strcmp(pbbdd->ciudad[34].nombre,"Orense")==0 && pbbdd->ciudad[34].poblacion==105893)
  comparaciones++;

if (strcmp(pbbdd->ciudad[35].nombre,"Lugo")==0 && pbbdd->ciudad[35].poblacion==98268)
  comparaciones++;

if (strcmp(pbbdd->ciudad[36].nombre,"Gerona")==0 && pbbdd->ciudad[36].poblacion==98255)
  comparaciones++;

if (strcmp(pbbdd->ciudad[37].nombre,"Santiago de Compostela")==0 && pbbdd->ciudad[37].poblacion==95966)
  comparaciones++;

if (strcmp(pbbdd->ciudad[38].nombre,"Cáceres")==0 && pbbdd->ciudad[38].poblacion==95814)
  comparaciones++;

if (strcmp(pbbdd->ciudad[39].nombre,"Melilla")==0 && pbbdd->ciudad[39].poblacion==86026)
  comparaciones++;

if (strcmp(pbbdd->ciudad[40].nombre,"Ceuta")==0 && pbbdd->ciudad[40].poblacion==84963)
  comparaciones++;

if (strcmp(pbbdd->ciudad[41].nombre,"Guadalajara")==0 && pbbdd->ciudad[41].poblacion==83633)
  comparaciones++;

if (strcmp(pbbdd->ciudad[42].nombre,"Toledo")==0 && pbbdd->ciudad[42].poblacion==83459)
  comparaciones++;

if (strcmp(pbbdd->ciudad[43].nombre,"Pontevedra")==0 && pbbdd->ciudad[43].poblacion==82459)
  comparaciones++;

if (strcmp(pbbdd->ciudad[44].nombre,"Palencia")==0 && pbbdd->ciudad[44].poblacion==79137)
  comparaciones++;

if (strcmp(pbbdd->ciudad[45].nombre,"Ciudad Real")==0 && pbbdd->ciudad[45].poblacion==74057)
  comparaciones++;

if (strcmp(pbbdd->ciudad[46].nombre,"Zamora")==0 && pbbdd->ciudad[46].poblacion==63217)
  comparaciones++;

if (strcmp(pbbdd->ciudad[47].nombre,"Mérida")==0 && pbbdd->ciudad[47].poblacion==59174)
  comparaciones++;

if (strcmp(pbbdd->ciudad[48].nombre,"Ávila")==0 && pbbdd->ciudad[48].poblacion==58083)
  comparaciones++;

if (strcmp(pbbdd->ciudad[49].nombre,"Cuenca")==0 && pbbdd->ciudad[49].poblacion==55102)
  comparaciones++;

if (strcmp(pbbdd->ciudad[50].nombre,"Segovia")==0 && pbbdd->ciudad[50].poblacion==53257)
  comparaciones++;

if (strcmp(pbbdd->ciudad[51].nombre,"Huesca")==0 && pbbdd->ciudad[51].poblacion==52282)
  comparaciones++;

if (strcmp(pbbdd->ciudad[52].nombre,"Soria")==0 && pbbdd->ciudad[52].poblacion==39171)
  comparaciones++;

if (strcmp(pbbdd->ciudad[53].nombre,"Teruel")==0 && pbbdd->ciudad[53].poblacion==35564)
  comparaciones++;

	  if (comparaciones == 54) ret = 1;
	  break;

       case 1:
          comparaciones = 0;

if (strcmp(pbbdd->ciudad[0].nombre,"Teruel")==0 && pbbdd->ciudad[0].poblacion==35564)
  comparaciones++;

if (strcmp(pbbdd->ciudad[1].nombre,"Soria")==0 && pbbdd->ciudad[1].poblacion==39171)
  comparaciones++;

if (strcmp(pbbdd->ciudad[2].nombre,"Huesca")==0 && pbbdd->ciudad[2].poblacion==52282)
  comparaciones++;

if (strcmp(pbbdd->ciudad[3].nombre,"Segovia")==0 && pbbdd->ciudad[3].poblacion==53257)
  comparaciones++;

if (strcmp(pbbdd->ciudad[4].nombre,"Cuenca")==0 && pbbdd->ciudad[4].poblacion==55102)
  comparaciones++;

if (strcmp(pbbdd->ciudad[5].nombre,"Ávila")==0 && pbbdd->ciudad[5].poblacion==58083)
  comparaciones++;

if (strcmp(pbbdd->ciudad[6].nombre,"Mérida")==0 && pbbdd->ciudad[6].poblacion==59174)
  comparaciones++;

if (strcmp(pbbdd->ciudad[7].nombre,"Zamora")==0 && pbbdd->ciudad[7].poblacion==63217)
  comparaciones++;

if (strcmp(pbbdd->ciudad[8].nombre,"Ciudad Real")==0 && pbbdd->ciudad[8].poblacion==74057)
  comparaciones++;

if (strcmp(pbbdd->ciudad[9].nombre,"Palencia")==0 && pbbdd->ciudad[9].poblacion==79137)
  comparaciones++;

if (strcmp(pbbdd->ciudad[10].nombre,"Pontevedra")==0 && pbbdd->ciudad[10].poblacion==82459)
  comparaciones++;

if (strcmp(pbbdd->ciudad[11].nombre,"Toledo")==0 && pbbdd->ciudad[11].poblacion==83459)
  comparaciones++;

if (strcmp(pbbdd->ciudad[12].nombre,"Guadalajara")==0 && pbbdd->ciudad[12].poblacion==83633)
  comparaciones++;

if (strcmp(pbbdd->ciudad[13].nombre,"Ceuta")==0 && pbbdd->ciudad[13].poblacion==84963)
  comparaciones++;

if (strcmp(pbbdd->ciudad[14].nombre,"Melilla")==0 && pbbdd->ciudad[14].poblacion==86026)
  comparaciones++;

if (strcmp(pbbdd->ciudad[15].nombre,"Cáceres")==0 && pbbdd->ciudad[15].poblacion==95814)
  comparaciones++;

if (strcmp(pbbdd->ciudad[16].nombre,"Santiago de Compostela")==0 && pbbdd->ciudad[16].poblacion==95966)
  comparaciones++;

if (strcmp(pbbdd->ciudad[17].nombre,"Gerona")==0 && pbbdd->ciudad[17].poblacion==98255)
  comparaciones++;

if (strcmp(pbbdd->ciudad[18].nombre,"Lugo")==0 && pbbdd->ciudad[18].poblacion==98268)
  comparaciones++;

if (strcmp(pbbdd->ciudad[19].nombre,"Orense")==0 && pbbdd->ciudad[19].poblacion==105893)
  comparaciones++;

if (strcmp(pbbdd->ciudad[20].nombre,"Jaén")==0 && pbbdd->ciudad[20].poblacion==114658)
  comparaciones++;

if (strcmp(pbbdd->ciudad[21].nombre,"Cádiz")==0 && pbbdd->ciudad[21].poblacion==118919)
  comparaciones++;

if (strcmp(pbbdd->ciudad[22].nombre,"León")==0 && pbbdd->ciudad[22].poblacion==126192)
  comparaciones++;

if (strcmp(pbbdd->ciudad[23].nombre,"Tarragona")==0 && pbbdd->ciudad[23].poblacion==131094)
  comparaciones++;

if (strcmp(pbbdd->ciudad[24].nombre,"Lérida")==0 && pbbdd->ciudad[24].poblacion==138144)
  comparaciones++;

if (strcmp(pbbdd->ciudad[25].nombre,"Huelva")==0 && pbbdd->ciudad[25].poblacion==144468)
  comparaciones++;

if (strcmp(pbbdd->ciudad[26].nombre,"Salamanca")==0 && pbbdd->ciudad[26].poblacion==144949)
  comparaciones++;

if (strcmp(pbbdd->ciudad[27].nombre,"Badajoz")==0 && pbbdd->ciudad[27].poblacion==149946)
  comparaciones++;

if (strcmp(pbbdd->ciudad[28].nombre,"Logroño")==0 && pbbdd->ciudad[28].poblacion==150876)
  comparaciones++;

if (strcmp(pbbdd->ciudad[29].nombre,"Castellón de la Plana")==0 && pbbdd->ciudad[29].poblacion==170990)
  comparaciones++;

if (strcmp(pbbdd->ciudad[30].nombre,"Albacete")==0 && pbbdd->ciudad[30].poblacion==172426)
  comparaciones++;

if (strcmp(pbbdd->ciudad[31].nombre,"Santander")==0 && pbbdd->ciudad[31].poblacion==172656)
  comparaciones++;

if (strcmp(pbbdd->ciudad[32].nombre,"Burgos")==0 && pbbdd->ciudad[32].poblacion==176608)
  comparaciones++;

if (strcmp(pbbdd->ciudad[33].nombre,"San Sebastián")==0 && pbbdd->ciudad[33].poblacion==186064)
  comparaciones++;

if (strcmp(pbbdd->ciudad[34].nombre,"Almería")==0 && pbbdd->ciudad[34].poblacion==194515)
  comparaciones++;

if (strcmp(pbbdd->ciudad[35].nombre,"Pamplona")==0 && pbbdd->ciudad[35].poblacion==195650)
  comparaciones++;

if (strcmp(pbbdd->ciudad[36].nombre,"Santa Cruz de Tenerife")==0 && pbbdd->ciudad[36].poblacion==208000)
  comparaciones++;

if (strcmp(pbbdd->ciudad[37].nombre,"Oviedo")==0 && pbbdd->ciudad[37].poblacion==220585)
  comparaciones++;

if (strcmp(pbbdd->ciudad[38].nombre,"Granada")==0 && pbbdd->ciudad[38].poblacion==234758)
  comparaciones++;

if (strcmp(pbbdd->ciudad[39].nombre,"La Coruña")==0 && pbbdd->ciudad[39].poblacion==243978)
  comparaciones++;

if (strcmp(pbbdd->ciudad[40].nombre,"Vitoria")==0 && pbbdd->ciudad[40].poblacion==244634)
  comparaciones++;

if (strcmp(pbbdd->ciudad[41].nombre,"Valladolid")==0 && pbbdd->ciudad[41].poblacion==301876)
  comparaciones++;

if (strcmp(pbbdd->ciudad[42].nombre,"Córdoba")==0 && pbbdd->ciudad[42].poblacion==326609)
  comparaciones++;

if (strcmp(pbbdd->ciudad[43].nombre,"Alicante")==0 && pbbdd->ciudad[43].poblacion==330525)
  comparaciones++;

if (strcmp(pbbdd->ciudad[44].nombre,"Bilbao")==0 && pbbdd->ciudad[44].poblacion==345122)
  comparaciones++;

if (strcmp(pbbdd->ciudad[45].nombre,"Las Palmas de Gran Canaria")==0 && pbbdd->ciudad[45].poblacion==378998)
  comparaciones++;

if (strcmp(pbbdd->ciudad[46].nombre,"Palma")==0 && pbbdd->ciudad[46].poblacion==402949)
  comparaciones++;

if (strcmp(pbbdd->ciudad[47].nombre,"Murcia")==0 && pbbdd->ciudad[47].poblacion==441003)
  comparaciones++;

if (strcmp(pbbdd->ciudad[48].nombre,"Málaga")==0 && pbbdd->ciudad[48].poblacion==569009)
  comparaciones++;

if (strcmp(pbbdd->ciudad[49].nombre,"Zaragoza")==0 && pbbdd->ciudad[49].poblacion==661108)
  comparaciones++;

if (strcmp(pbbdd->ciudad[50].nombre,"Sevilla")==0 && pbbdd->ciudad[50].poblacion==690566)
  comparaciones++;

if (strcmp(pbbdd->ciudad[51].nombre,"Valencia")==0 && pbbdd->ciudad[51].poblacion==790201)
  comparaciones++;

if (strcmp(pbbdd->ciudad[52].nombre,"Barcelona")==0 && pbbdd->ciudad[52].poblacion==1608746)
  comparaciones++;

if (strcmp(pbbdd->ciudad[53].nombre,"Madrid")==0 && pbbdd->ciudad[53].poblacion==3165541)
  comparaciones++;

	  if (comparaciones == 54) ret = 1;
	  break;


	default:
	  break;


    }
    return ret;
}
