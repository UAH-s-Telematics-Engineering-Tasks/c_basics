/* Nombre Fichero: src/main.c */
#include "prog05.h"
#include <math.h>
#include <sys/time.h>                // for gettimeofday()


#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main(int argc, char *argv[]) {
    RegistroClientes_t bbdd;
    Cliente_t * punteroClientes[MAX_ARRAY];

    int ret = 0;
    float retF = 0;
    char *TxtError = ANSI_COLOR_RED"Error en %s, en la línea %d, práctica no apta!!!\n"ANSI_COLOR_RESET;

    bbdd.num_clientes=0;

    printf("\nComprobando parámetros de inicializarPunteros en línea %d\n",__LINE__);

    if(argc>1)
        argv[0]=NULL;


    ret = inicializarPunteros(0, punteroClientes);
    if (ret > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        if(argc>1) if(argc>1) exit(-1);
    }

    ret = inicializarPunteros(&bbdd, 0);
    if (ret > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        if(argc>1) if(argc>1) exit(-1);
    }



    printf("\nParámetros de inicializarPunteros en línea %d correctos\n\n\n",__LINE__);

    ret = inicializarPunteros(&bbdd, punteroClientes);
    if (ret < 0) {
        printf("Error en implementacion funcion inicializarPunteros, codigo %d\n", ret);
        if(argc>1) if(argc>1) exit(-1);
    }


    printf("\nComprobando parámetros de introducirCliente en línea %d\n",__LINE__);

    ret = introducirCliente(0, "ruben", "izquierdo", 37.5);
    if (ret > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        if(argc>1) if(argc>1) exit(-1);
    }

    ret = introducirCliente(&bbdd, 0, "izquierdo", 37.5);
    if (ret > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        if(argc>1) if(argc>1) exit(-1);
    }

    ret = introducirCliente(&bbdd, "ruben", 0, 37.5);
    if (ret > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        if(argc>1) if(argc>1) exit(-1);
    }

    ret = introducirCliente(&bbdd, "ruben", "izquierdo", -1);
    if (ret > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        if(argc>1) if(argc>1) exit(-1);
    }

    printf("\nParámetros de introducirCliente en línea %d correctos\n\n\n",__LINE__);



ret = introducirCliente(&bbdd, "Bill", "Gates", 86);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Warren", "Buffett",  75.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Jeff", "Bezos",  72.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Amancio", "Ortega",  71.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Mark", "Zuckerberg", 56);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Carlos", "Slim",  54.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Larry", "Ellison",  52.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Charles", "Koch",  48.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "David", "Koch",  48.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Michael", "Bloomberg",  47.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Bernard", "Arnault",  41.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Larry", "Page",  40.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Sergey", "Brin",  39.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Liliane", "Bettencourt",  39.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "S.", "Robson",  34.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Jim", "Walton", 34);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Alice", "Walton",  33.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Wang", "Jianlin",  31.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Li", "Ka-shing",  31.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Sheldon", "Adelson",  30.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Steve", "Ballmer", 30);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Jorge", "Paulo",  29.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Jack", "Ma",  28.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Beate", "Heister",  27.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "David", "Thomson",  27.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Jacqueline", "Mars", 27);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "John", "Mars", 27);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Phil", "Knight",  26.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Maria", "Franca",  25.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "George", "Soros",  25.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Ma", "Huateng",  24.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Lee", "Shau",  24.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Mukesh", "Ambani",  23.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Masayoshi", "Son",  21.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Kjeld", "Kirk",  21.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Georg", "Schaeffler",  20.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Joseph", "Safra",  20.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Michael", "Dell",  20.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Susanne", "Klatten",  20.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Len", "Blavatnik", 20);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Laurene", "Powell", 20);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Paul", "Allen",  19.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Stefan", "Persson",  19.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Theo", "Albrecht",  18.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Prince", "Alwaleed",  18.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Leonid", "Mikhelson",  18.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Charles", "Ergen",  18.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Stefan", "Quandt",  18.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "James", "Simons", 18);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Leonardo", "Del",  17.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Alexey", "Mordashov",  17.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "William", "Ding",  17.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Dieter", "Schwarz", 17);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Ray", "Dalio",  16.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Carl", "Icahn",  16.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Lakshmi", "Mittal",  16.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Serge", "Dassault",  16.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Vladimir", "Lisin",  16.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Gennady", "Timchenko", 16);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Wang", "Wei",  15.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Tadashi", "Yanai",  15.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Charoen", "Sirivadhanabhakdi",  15.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Francois", "Pinault",  15.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Hinduja", "family",  15.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "David", "Reuben",  15.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Donald", "Bren",  15.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Alisher", "Usmanov",  15.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Lee", "Kun-Hee",  15.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Thomas", "Kwok", 15);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Joseph", "Lau", 15);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Gina", "Rinehart", 15);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Azim", "Premji",  14.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Marcel", "Herrmann",  14.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Vagit", "Alekperov",  14.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Mikhail", "Fridman",  14.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Abigail", "Johnson",  14.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Pallonji", "Mistry",  14.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Vladimir", "Potanin",  14.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Wang", "Wenyin", 14);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Elon", "Musk",  13.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Stefano", "Pessina",  13.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "German", "Larrea",  13.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Thomas", "Peterffy",  13.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Iris", "Fontbona",  13.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Dilip", "Shanghvi",  13.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Dietrich", "Mateschitz",  13.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Harold", "Hamm",  13.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Robin", "Li",  13.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Andrey", "Melnichenko",  13.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Rupert", "Murdoch",  13.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Heinz", "Hermann",  13.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Steve", "Cohen", 13);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Patrick", "Drahi", 13);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Henry", "Sy",  12.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Charlene", "Carvalho-Heineken",  12.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Philip", "Anschutz",  12.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Ronald", "Perelman",  12.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Hans", "Rausing",  12.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Carlos", "Alberto",  12.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Klaus-Michael", "Kuehne",  12.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Viktor", "Vekselberg",  12.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "He", "Xiangjian",  12.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Shiv", "Nadar",  12.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Takemitsu", "Takizaki",  12.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Aliko", "Dangote",  12.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Petr", "Kellner",  12.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Jim", "Kennedy",  12.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Blair", "Parry-Okeden",  12.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Lui", "Che",  12.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Donald", "Newhouse",  12.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Samuel", "Newhouse",  12.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Stephen", "Schwarzman",  11.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Alain", "Wertheimer",  11.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Gerard", "Wertheimer",  11.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Robert", "Kuok",  11.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Emmanuel", "Besnier",  11.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Lukas", "Walton",  11.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Hasso", "Plattner",  11.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Eric", "Schmidt",  11.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Luis", "Carlos", 11);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "David", "Tepper", 11);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Udo", "Tschira", 11);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Alberto", "Bailleres",  10.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Dustin", "Moskovitz",  10.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Majid", "Al",  10.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Peter", "Woo",  10.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Andrew", "Beal",  10.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Hui", "Ka",  10.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "John", "Menard", 10.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Reinhold", "Wuerth", 10);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "John", "Fredriksen",  9.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Dhanin", "Chearavanont",  9.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Kumar", "Birla",  9.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Graeme", "Hart",  9.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Massimiliana", "Landini",  9.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Galen", "Weston",  9.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "James", "Goodnight",  9.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "German", "Khan",  9.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Roman", "Abramovich",  9.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "R.", "Budi", 9);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Dietmar", "Hopp", 9);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Jan", "Koum", 9);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "James", "Ratcliffe", 9);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Yang", "Huiyan", 9);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Michael", "Hartono",  8.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Leonard", "Lauder",  8.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Eyal", "Ofer",  8.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Mikhail", "Prokhorov",  8.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Thomas", "Frist",  8.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Robert", "Ng",  8.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Ernesto", "Bertarelli",  8.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Patrick", "Soon-Shiong",  8.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Harry", "Triguboff",  8.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Yao", "Zhenhua",  8.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Zhang", "Zhidong",  8.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Viktor", "Rashnikov",  8.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Charles", "Schwab",  8.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Shahid", "Khan",  8.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Mohammed", "Al",  8.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Micky", "Arison",  8.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "James", "Chambers",  8.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Xavier", "Niel",  8.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Cyrus", "Poonawalla",  8.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Katharine", "Rayner",  8.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Margaretta", "Taylor",  8.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Ken", "Griffin", 8);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Herbert", "Kohler",8);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Uday", "Kotak", 8);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Pierre", "Omidyar", 8);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "George", "Kaiser",  7.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "John", "Paulson",  7.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Eduardo", "Saverin",  7.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Edward", "Johnson", 7.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Eli", "Broad",  7.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Heinrich", "Deichmann",  7.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Liu", "Qiangdong",  7.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "John", "Malone",  7.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Michael", "Otto",  7.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Walter", "Droege",  7.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "James", "Irving",  7.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Aloys", "Wobben",  7.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Gianluigi", "Aponte",  7.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Terry", "Gou",  7.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Stanley", "Kroenke",  7.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Sunil", "Mittal",  7.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Carl", "Cook",  7.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Stephen", "Ross",  7.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "August", "von",  7.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Zhou", "Qunfei",  7.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "David", "Geffen",  7.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Walter", "Kwok",  7.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Gordon", "Moore",  7.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Dmitry", "Rybolovlev",  7.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Johann", "Graf",  7.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Richard", "Kinder",  7.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Alexei", "Kuzmichev",  7.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Hank", "Meijer",  7.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Zong", "Qinghou",  7.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Silvio", "Berlusconi", 7);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Nicky", "Oppenheimer", 7);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Andrei", "Skoch",  6.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Abdulla", "bin",  6.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Sergei", "Galitsky",  6.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Pauline", "MacMillan",  6.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Lei", "Jun",  6.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Frederik", "Paulsen",  6.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Quek", "Leng",  6.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Melker", "Schorling",  6.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "David", "Duffield",  6.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Michael", "Kadoorie",  6.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Li", "Shufu",  6.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Sandra", "Ortega",  6.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Suh", "Kyung-Bae",  6.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Zhang", "Shiping",  6.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Giorgio", "Armani",  6.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "John", "Grayken",  6.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Liu", "Yongxing",  6.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Xu", "Shihui",  6.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Goh", "Cheng",  6.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Bruce", "Halle",  6.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Ananda", "Krishnan",  6.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Richard", "LeFrak",  6.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Iskander", "Makhmudov",  6.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "John", "Sobrato",  6.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Les", "Wexner",  6.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Garrett", "Camp",  6.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Leonid", "Fedun",  6.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Guo", "Guangchang",  6.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Mikhail", "Gutseriev",  6.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Travis", "Kalanick",  6.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Suleiman", "Kerimov",  6.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Carrie", "Perrodo",  6.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Anders", "Holch",  6.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "David", "Green",  6.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Robert", "Rowling",  6.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Tsai", "Eng-Meng",  6.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Jorn", "Rausing",  6.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Johann", "Rupert",  6.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Marian", "Ilitch", 6);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Ann", "Walton", 6);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Jay", "Lee", 6);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Pan", "Zhengmin", 6);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Finn", "Rausing", 6);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Kirsten", "Rausing", 6);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Dennis", "Washington", 6);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Xu", "Chuanhua", 6);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Francis", "Choi",  5.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Erivan", "Haub",  5.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Wei", "Jianjun",  5.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Gautam", "Adani",  5.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Mike", "Adenuga",  5.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Maria", "Asuncion",  5.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Daniel", "Gilbert",  5.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "John", "Gokongwei", 5.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Gong", "Hongjia",  5.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Charles", "Johnson",  5.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Ian", "Livingstone",  5.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Hiroshi", "Mikitani",  5.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Augusto", "Perfetti",  5.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Joseph", "Tsai",  5.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Dannine", "Avara",  5.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Scott", "Duncan",  5.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Andrew", "Forrest",  5.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Milane", "Frantz",  5.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Lu", "Guanqiu",  5.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Ludwig", "Merckle",  5.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Randa", "Williams",  5.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Yan", "Zhi",  5.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Brian", "Acton",  5.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Chan", "Laiwa",  5.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Richard", "DeVos",  5.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Eva", "Gonda",  5.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Joe", "Lewis",  5.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Frank", "Lowy",  5.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Whitney", "MacMillan",  5.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Jim", "Pattison",  5.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Emanuele", "(Lino)",  5.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Nassef", "Sawiris",  5.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Stef", "Wertheimer",  5.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Christoffel", "Wiese",  5.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Leon", "Black",  5.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Antonia", "Johnson",  5.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Bruce", "Kovner",  5.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Ralph", "Lauren",  5.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}

ret = introducirCliente(&bbdd, "Lin", "Yu-lin",  5.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Shashi", "Ruia",  5.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Hansjoerg", "Wyss",  5.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Hui", "Wing",  5.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Vikram", "Lal",  5.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Sri", "Prakash",  5.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Sumner", "Redstone",  5.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "David", "Shaw",  5.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Christy", "Walton",  5.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Guenther", "Fielmann",  5.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Law", "Kar",  5.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Ted", "Lerner",  5.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Margarita", "Louis-Dreyfus",  5.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "George", "Lucas",  5.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Trevor", "Rees-Jones",  5.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Odd", "Reitan",  5.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "David", "Sun",  5.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "John", "Tu",  5.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Benu", "Gopal",  5.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Juan", "Francisco",  5.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Vincent", "Bollore",  5.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "John", "Doerr",  5.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Israel", "Englander",  5.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Savitri", "Jindal",  5.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Jerry", "Jones",  5.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Tom", "Love",  5.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Wolfgang", "Marguerre",  5.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Arnon", "Milchan",  5.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Pankaj", "Patel",  5.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Maria-Elisabeth", "Schaeffler",  5.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Jim", "Davis",  5.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Oleg", "Deripaska",  5.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Ivan", "Glasenberg",  5.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Rupert", "Johnson", 5.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Robert", "Kraft",  5.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Kwee", "family",  5.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Steven", "Rales",  5.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Juan", "Roig",  5.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Bruno", "Schroder",  5.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "David", "Barclay", 5);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Pierre", "Bellon", 5);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Richard", "Branson", 5);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Tamara", "Gustavson", 5);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Henry", "Kravis", 5);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Dan", "Olsson", 5);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "George", "Roberts", 5);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Edward", "Roski",5);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Wee", "Cho", 5);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Sam", "Zell", 5);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Shari", "Arison",  4.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Pollyanna", "Chu",  4.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Chung", "Mong-Koo",  4.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Albert", "Frere",  4.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Kwon", "Hyuk-Bin",  4.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Philip", "Green",  4.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Ray", "Lee",  4.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Willi", "Liebherr",  4.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Lu", "Zhiqiang",  4.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "John", "Overdeck",  4.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "David", "Siegel",  4.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Daniel", "Ziff",  4.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Dirk", "Ziff",  4.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Robert", "Ziff",  4.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Stanley", "Druckenmiller",  4.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Desh", "Bandhu",  4.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Paul", "Tudor",  4.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Lee", "Shin",  4.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Denis", "O'Brien",  4.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Pan", "Sutong",  4.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Horst", "Paulmann",  4.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Alejandro", "Santo",  4.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Andres", "Santo",  4.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Thomas", "Schmidheiny",  4.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Hong", "Piow",  4.7  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Rinat", "Akhmetov",  4.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Pyotr", "Aven",  4.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Rahel", "Blocher",  4.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Charles", "Dolan",  4.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Laurence", "Graff",  4.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Liu", "Yonghao",  4.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Chairul", "Tanjung",  4.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Zhao", "Tao",  4.6  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Alexander", "Abramov",  4.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Clive", "Calder",  4.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Andrei", "Guriev",  4.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Arthur", "Irving",  4.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Bidzina", "Ivanishvili",  4.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Micky", "Jagtiani",  4.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Karl-Heinz", "Kipp",  4.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Magdalena", "Martullo-Blocher",  4.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Michael", "Platt",  4.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Sergei", "Popov",  4.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Mitchell", "Rales",  4.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Leandro", "Rizzuto",  4.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "John", "Sall",  4.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Mark", "Scheinberg",  4.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Andreas", "von",  4.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Kelcy", "Warren",  4.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Wu", "Yajun",  4.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "M.A.", "Yusuff",  4.5  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Americo", "Amorim",  4.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Dona", "Bertarelli",  4.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Subhash", "Chandra",  4.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Frits", "Goldschmeding",  4.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Michael", "Herz",  4.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Wolfgang", "Herz",  4.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Richard", "Li",  4.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Akira", "Mori",  4.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Axel", "Oberwelland",  4.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Anthony", "Pratt",  4.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Karen", "Pritzker",  4.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Paolo", "Mario",  4.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Reinhold", "Schmieding",  4.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Sheldon", "Solow",  4.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Ronda", "Stryker",  4.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Tong", "Jinquan",  4.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Wang", "Wenxue",  4.4  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Jeffery", "Hildebrand",  4.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Jeremy", "Jacobs", 4.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Kim", "Jung-Ju",  4.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Andrei", "Kozitsyn",  4.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Nancy", "Walton",  4.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Gwendolyn", "Sontheim",  4.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Elisabeth", "Mohn",  4.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Jeffrey", "Skoll",  4.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Frederick", "Smith",  4.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Sun", "Piaoyang",  4.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Martin", "Viessmann",  4.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Yeung", "Kin-man",  4.3  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Jeronimo", "Arango",  4.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "David", "Cheriton",  4.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "James", "Dyson",  4.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Pansy", "Ho",  4.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Martha", "Ingram",  4.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Michel", "Leclercq",  4.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Theo", "Mueller",  4.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Michael", "Pieper",  4.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Vichai", "Srivaddhanaprabha",  4.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Leonard", "Stern",  4.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Keiichiro", "Takahara",  4.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Wang", "Chuanfu",  4.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Samuel", "Yin",  4.2  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Abdulla", "Al",  4.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Suhail", "Bahwan",  4.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Lam", "Wai",  4.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Angela", "Leong",  4.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Fredrik", "Lundberg",  4.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Ma", "Jianrong",  4.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Gabe", "Newell",  4.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Terrence", "Pegula",  4.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Ira", "Rennert",  4.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "J.", "Christopher",  4.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Jude", "Reyes",  4.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Kushal", "Pal",  4.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Xu", "Bo",  4.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Zhang", "Jindong",  4.1  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Robert", "Bass", 4);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Marc", "Benioff", 4);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Jean-Michel", "Besnier", 4);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Marie", "Besnier", 4);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "John", "Gandel", 4);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Bertil", "Hult", 4);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "James", "Jannard", 4);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Jason", "Jiang", 4);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Patrick", "Lee", 4);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Bernard", "Marcus", 4);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Alain", "Merieux", 4);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "John", "Morris", 4);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Bobby", "Murphy", 4);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Isaac", "Perlmutter", 4);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "H.", "Ross", 4);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Stewart", "and", 4);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Robert", "Rich ",4);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Evan", "Spiegel", 4);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Russ", "Weiner", 4);
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Austen", "Cargill", 3.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "James", "Cargill", 3.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Vanich", "Chaiyawan",  3.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Traudl", "Engelhorn",  3.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Diane", "Hendricks",  3.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Ji", "Changqun",  3.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Nathan", "Kirsh",  3.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Marianne", "Liebmann",  3.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Luo", "Jye",  3.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Mary", "Alice",  3.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Ermirio", "Pereira",  3.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Maria", "Helena",  3.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Naguib", "Sawiris",  3.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Friede", "Springer",  3.9  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Prince", "Sultan",  3.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Stephen", "Bisciotti",  3.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Nathan", "Blecharczyk",  3.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Rick", "Caruso",  3.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Bubba", "Cathy",  3.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Dan", "Cathy",  3.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Brian", "Chesky",  3.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Giuseppe", "De'Longhi",  3.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Ralph", "Dommermuth",  3.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Joe", "Gebbia",  3.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Jia", "Yueting",  3.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "H.", "Fisk",  3.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Imogene", "Powers",  3.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "S.", "Curtis",  3.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Helen", "Johnson-Leipold",  3.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Winnie", "Johnson-Marquart",  3.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Barry", "Lam",  3.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Liang", "Wengen",  3.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Niels", "Peter",  3.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Kalanithi", "Maran",  3.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Jose", "Roberto",  3.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Roberto", "Irineu",  3.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Clayton", "Mathile",  3.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Siegfried", "Meister",  3.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Julian", "Robertson",  3.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Walter", "Scott",  3.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}


ret = introducirCliente(&bbdd, "Joan", "Tisch",  3.8  );
 if (ret < 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("%d " , bbdd.num_clientes);

}

ret = introducirCliente(&bbdd, "Martin", "Bouygues",  3.7  );
 if (ret > 0) {
printf(TxtError,  __FILE__, __LINE__);
if(argc>1) exit(-1);
}
else
{
printf("\nNo superamos el número máximo de clientes %d\n" , bbdd.num_clientes);

}







    printf("\nComprobando parámetros de mostrarDatosArrayEstructuras en línea %d\n",__LINE__);


    ret = mostrarDatosArrayEstructuras(0);
    if (ret > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        if(argc>1) exit(-1);
    }


    printf("\nParámetros de mostrarDatosArrayEstructuras en línea %d correctos\n\n\n",__LINE__);


    printf("\nLista de clientes contenida en el array de estructuras:\n");
    ret = mostrarDatosArrayEstructuras(&bbdd);
    if (ret < 0) {
        printf(TxtError,  __FILE__, __LINE__);
        if(argc>1) exit(-1);
    }


    printf("\nComprobando parámetros de ordenarPorNombreArrayPunterosBurbuja en línea %d\n",__LINE__);


    ret = ordenarPorNombreArrayPunterosBurbuja(0,bbdd.num_clientes);
    if (ret > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        if(argc>1) exit(-1);
    }


    printf("\nParámetros de ordenarPorNombreArrayPunterosBurbuja en línea %d correctos\n\n\n",__LINE__);

    struct timeval t1, t2;
    double elapsedTime;
    gettimeofday(&t1, NULL);
    ret = ordenarPorNombreArrayPunterosBurbuja(punteroClientes,bbdd.num_clientes);
    gettimeofday(&t2, NULL);

    elapsedTime = (t2.tv_sec - t1.tv_sec) * 1000.0;      // sec to ms
    elapsedTime += (t2.tv_usec - t1.tv_usec) / 1000.0;   // us to ms

    printf(ANSI_COLOR_GREEN"\n\n\tTiempo empleado en ordenar con burbuja %lf ms\n\n"ANSI_COLOR_RESET, elapsedTime);

    if (ret < 0) {
        printf(TxtError,  __FILE__, __LINE__);
        if(argc>1) exit(-1);
    }


    printf("\nComprobando parámetros de ordenarPorNombreArrayPunterosInserción en línea %d\n",__LINE__);


    ret = ordenarPorNombreArrayPunterosInsercion(0,bbdd.num_clientes);
    if (ret > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        if(argc>1) exit(-1);
    }


    printf("\nParámetros de ordenarPorNombreArrayPunterosInserción en línea %d correctos\n\n\n",__LINE__);



    gettimeofday(&t1, NULL);
    ret = ordenarPorNombreArrayPunterosInsercion(punteroClientes,bbdd.num_clientes);
    gettimeofday(&t2, NULL);

    elapsedTime = (t2.tv_sec - t1.tv_sec) * 1000.0;      // sec to ms
    elapsedTime += (t2.tv_usec - t1.tv_usec) / 1000.0;   // us to ms

    printf(ANSI_COLOR_GREEN"\n\n\tTiempo empleado en ordenar inserción %lf ms\n\n"ANSI_COLOR_RESET, elapsedTime);

    if (ret < 0) {
        printf(TxtError,  __FILE__, __LINE__);
        if(argc>1) exit(-1);
    }


    printf("\nComprobando parámetros de mostrarDatosArrayPunteros en línea %d\n",__LINE__);


    ret = mostrarDatosArrayPunteros(0,bbdd.num_clientes);
    if (ret > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        if(argc>1) exit(-1);
    }


    printf("\nParámetros de mostrarDatosArrayPunteros en línea %d correctos\n\n\n",__LINE__);



    printf("\nLista de clientes contenida en el array de punteros ordenado alfabeticamente:\n");
    ret = mostrarDatosArrayPunteros(punteroClientes ,bbdd.num_clientes);
    if (ret < 0) {
        printf(TxtError,  __FILE__, __LINE__);
        if(argc>1) exit(-1);
    }


    printf("\nComprobando parámetros de calcularVarianzaIngresosArrayEstructuras en línea %d\n",__LINE__);

    retF = calcularVarianzaIngresosArrayEstructuras(0);
    if (retF > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        if(argc>1) exit(-1);
    }


     printf("\nParámetros de calcularVarianzaIngresosArrayEstructuras en línea %d correctos\n\n\n",__LINE__);


    retF = calcularVarianzaIngresosArrayEstructuras(&bbdd);
    if (retF < 0 || fabs(retF - 98.4775) > 0.001) {
        printf(TxtError,  __FILE__, __LINE__);
        if(argc>1) exit(-1);
    } else
        printf("\nLa varianza de los ingresos de los clientes es: %.2f\n\n\n", retF);

    return 0;
}
