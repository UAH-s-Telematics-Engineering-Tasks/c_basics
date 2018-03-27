/* Nombre Fichero: src/operaciones.c */

#include "operaciones.h"

int realizarOperacion(double op1, double op2, char operacion)
{
  if (operacion == 'E') {
    printf("ERROR Inputing Data!!\n");
    return -1;
  }
  printf("Operation: %g %c %g\n", op1, operacion, op2);
  int result = 0;
  switch (operacion) {
    case '+':
      result = op1 + op2;
      break;
    case '-':
      result = op1 - op2;
      break;
    case '*':
      result = op1 * op2;
      break;
    case '/':
      if (!op2)
        return -1;
      else
        result = op1 / op2;
      break;
    case '^':
      result = (int) pow(op1, op2);
      break;
    default:
      return -1;
  }
  printf("Operation: %g %c %g\n", op1, operacion, op2);
  return result;
}
