 /* Nombre Fichero: src/main.c */
#include <stdlib.h>
#include <stdio.h>
#include "palindromo.h"

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main() { 
    char cadena_pal[] = "Dabale arroz a la zorra el abad";
    char cadena_nopal[] = "Esto no es palídromo";
    char cadena_larga[] = "Adivina ya te opina, ya ni miles origina, ya ni cetro me domina, ya ni monarcas, a repaso ni mulato carreta, acaso nicotina, ya ni cita vecino, anima cocina, pedazo gallina, cedazo terso nos retoza de canilla goza, de panico camina, onice vaticina, ya ni tocino saca, a terracota luminosa pera, sacra nomina y animo de mortecina, ya ni giros elimina, ya ni poeta, ya ni vida";
    int esPalindromo = 0;
    char *TxtError1 = ANSI_COLOR_RED "Error en implementacion de funcion comprobarPalindromo , línea %d del main, práctica no apta!!!\n" ANSI_COLOR_RESET;
    esPalindromo = comprobarPalindromo(cadena_pal);

    if (esPalindromo ==  1)
      printf("La cadena \"%s\" SI es palindromo. Test OK!\n", cadena_pal);
    else
        printf(TxtError1, __LINE__);

    esPalindromo = comprobarPalindromo(cadena_nopal);

    if (esPalindromo ==  0)
      printf("La cadena \"%s\" NO es palindromo. Test OK!\n", cadena_nopal);
    else
        printf(TxtError1, __LINE__);
    
    
    esPalindromo = comprobarPalindromo(cadena_larga);

    if (esPalindromo ==  1)
      printf("La cadena \"%s\" SI es palindromo. Test OK!\n", cadena_larga);
    else
        printf(TxtError1, __LINE__);   
    

    return 0;
} 
