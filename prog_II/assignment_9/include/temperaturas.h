/* Nombre Fichero: include/temperaturas.h */

#define RESERVA_MALLOC 400
#define LONG_NOMBRE 20

struct fecha_t {
    int anyo;
    int mes;
    int dia;
};

typedef struct dateTemp {
	struct fecha_t momento;
	float temperatura;
}dateTemp_t;

/* Funcion que abre y lee el archivo de texto dado y guarda todas las fechas y temperaturas
 * Al leer las fechas y las temperaturas comprobar son correctas
 * (Fechas entre el 1 de enero de 1988 y el 31 de diciembre de 1991; Temperaturas entre -100º y 100º).
 * Si hay alguna línea incorrecta hay que descartarla y seguir leyendo.
 * Se debe reservar memoria para guardar los datos contenidos en el archivo.
 * [IN]  nombreRead, nombre del archivo
 * [OUT] datos, puntero a puntero a estructura tipo dateTemp_t donde escribir los datos leidos
 * [OUT] numDatos, número de fechas registradas
 * [OUT] numLineasIncorrectas, número de líneas incorrectas
 * [RET] Si error < 0
 */
int leerFichero(const char* nombreRead, dateTemp_t** datos, int* numDatos, int* numLineasIncorrectas);

/* Funcion que guarda los datos en un nuevo archivo cuyo nombre se pasa como parámetro.
 * [ IN] datos, puntero dateTemp_t que contiene los datos leidos
 * [ IN] numDatos, número de fechas registradas
 * [ IN] nombre, cadena de caracteres que contiene el nombre del archivo
 * [RET] Si error < 0
 */
int guardarFichero(const dateTemp_t* datos, int numDatos, const char* nombre);

/* Funcion que recibe la fecha del dato que se desea modificar y cambia su temperatura
 * [OUT] datos, puntero a puntero a estructura tipo dateTemp_t donde están los datos leidos
 * [ IN] numDatos, número de fechas registradas
 * [ IN] diaM, fecha a cambiar
 * [ IN] temp, nueva temperatura
 * [RET] Si error < 0
 */
int modificarRegistro(dateTemp_t** datos, int numDatos, struct fecha_t diaM, float temp);

/* Funcion que busca la temperatura máxima y el día que se dió
 * [ IN] datos, puntero dateTemp_t que contiene los datos leidos
 * [ IN] numDatos, número de fechas registradas
 * [OUT] temp_max, puntero a float donde almacenar la temperatura máxima
 * [OUT] diaM, puntero a struct fecha_t donde almacenar la fecha de la temperatura máxima
 * [RET] Si error < 0
 */
int calcularTempMaxima(const dateTemp_t* datos, int numDatos, float* temp_max, struct fecha_t* diaM);

/* Funcion que busca la temperatura mínima y el día que se dió
 * [ IN] datos, puntero dateTemp_t que contiene los datos leidos
 * [ IN] numDatos, número de fechas registradas
 * [OUT] temp_min, puntero a float donde almacenar la temperatura mínima
 * [OUT] diaM, puntero a struct fecha_t donde almacenar la fecha de la temperatura mínima
 * [RET] Si error < 0
 */
int calcularTempMinima(const dateTemp_t* datos, int numDatos, float* temp_min, struct fecha_t* diaM);

/* Funcion que calcula la temperatura media.
 * [ IN] datos, puntero dateTemp_t que contiene los datos leidos
 * [ IN] numDatos, número de fechas registradas
 * [OUT] temp, puntero a float donde almacenar la temperatura media
 * [RET] Si error < 0
 */
int calcularTempMedia(const dateTemp_t* datos, int numDatos, float* temp);
