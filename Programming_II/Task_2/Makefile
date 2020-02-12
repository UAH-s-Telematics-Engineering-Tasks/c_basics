programa=p3

$(programa): ./src/main.c ./src/array.c ./src/estadisticas.c ./include/array.h ./include/estadisticas.h
	gcc -o $(programa) ./src/main.c ./src/array.c ./src/estadisticas.c -I./include -lm -Wall -Wextra
