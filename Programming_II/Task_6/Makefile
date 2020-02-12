programa=p6

$(programa): ./src/main.c ./src/argumentos.c ./src/operaciones.c ./include/argumentos.h ./include/operaciones.h
	gcc -o $(programa) -g ./src/main.c ./src/argumentos.c ./src/operaciones.c -I./include -lm -Wall -Wextra
