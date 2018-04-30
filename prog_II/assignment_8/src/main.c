/* Nombre Fichero: src/main.c */
#include <stdio.h>
#include "ficheros.h"
#include "cadenas.h"

int main(int argc, char *argv[]) {
    int ret = 0;
    FILE* fichRead = NULL;//fichero de lectura

    int numCambios = 0;
    char* nombreFichero = "prac07_prueba01.txt";

    if (argv[0]==NULL)
        printf("No tenemos nada");

    ret = abrirFicheroLectura(nombreFichero, &fichRead);
    if (ret < 0 )
    {
        printf("(1) Incorrecto. abrirFicheroLectura\n");

        if(argc>1)
            exit(-1);
    }
    else
        printf("(1) Correcto. abrirFicheroLectura\n");

    ret = escribirFicheroSinVocales(nombreFichero, fichRead, &numCambios);

    if (ret < 0 )
    {
        printf("(2) Incorrecto. escribirFicheroSinVocales\n");

        if(argc>1)
            exit(-1);
    }
    else
        printf("(2) Correcto. escribirFicheroSinVocales\n");

    if (numCambios == 25 )
        printf("(3) Correcto. número de cambios en escribirFicheroSinVocales\n");
    else
    {
        printf("(3) Incorrecto. número de cambios en escribirFicheroSinVocales\n");
        if(argc>1)
            exit(-1);
    }


    if(fichRead!=NULL)
    {
      fclose(fichRead);
      fichRead = NULL;
    }

    nombreFichero = "prac07_prueba01SinVocales.txt";

    ret = abrirFicheroLectura(nombreFichero, &fichRead);

    if (ret < 0 )
    {
        printf("(4) Incorrecto. abrirFicheroLectura\n");

        if(argc>1)
            exit(-1);
    }
    else
        printf("(4) Correcto. abrirFicheroLectura\n");

    if(fichRead!=NULL)
    {
      fclose(fichRead);
      fichRead = NULL;
    }


    //-------------------------------------------------------------------------------------//

    numCambios = 0;
    nombreFichero = NULL;
    ret = abrirFicheroLectura(nombreFichero, &fichRead);
    if (ret < 0 )
        printf("(5) Correcto. abrirFicheroLectura\n");
    else
    {
        printf("(5) Incorrecto. abrirFicheroLectura\n");

        if(argc>1)
            exit(-1);
    }


    ret = escribirFicheroSinVocales(nombreFichero, fichRead, &numCambios);

    if (ret < 0 )
        printf("(6) Correcto. escribirFicheroSinVocales\n");
    else
    {
        printf("(6) Incorrecto. escribirFicheroSinVocales\n");

        if(argc>1)
            exit(-1);
    }


    if(fichRead!=NULL)
    {
      fclose(fichRead);
      fichRead = NULL;
    }


    //-------------------------------------------------------------------------------------//

    numCambios = 0;
    nombreFichero = "prac07_prueba01.txt";

    ret = abrirFicheroLectura(nombreFichero, &fichRead);

    nombreFichero = NULL;

    ret = escribirFicheroSinVocales(nombreFichero, fichRead, &numCambios);
    if (ret < 0 )
    {
        printf("(7) Incorrecto. abrirFicheroLectura\n");

        if(argc>1)
            exit(-1);
    }
    else
        printf("(7) Correcto. abrirFicheroLectura\n");


    if(fichRead!=NULL)
    {
      fclose(fichRead);
      fichRead = NULL;
    }

    nombreFichero = "SinVocales.txt";
    ret = abrirFicheroLectura(nombreFichero, &fichRead);

    if (ret < 0 )
        printf("(8) Incorrecto. abrirFicheroLectura\n");
    else
    {
        printf("(8) Correcto. abrirFicheroLectura\n");

        if(argc>1)
            exit(-1);
    }


    if(fichRead!=NULL)
    {
      fclose(fichRead);
      fichRead = NULL;
    }


    //-------------------------------------------------------------------------------------//

    numCambios = 0;
    nombreFichero = "prac07_prueba02.txt";

    ret = abrirFicheroLectura(nombreFichero, &fichRead);

    if (ret < 0 )
        printf("(9) Correcto. abrirFicheroLectura\n");
    else
    {
        printf("(9) Incorrecto. abrirFicheroLectura\n");

        if(argc>1)
            exit(-1);
    }



    if(fichRead!=NULL)
    {
      fclose(fichRead);
      fichRead = NULL;
    }


    return 0;
}
