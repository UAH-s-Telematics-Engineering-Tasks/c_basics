//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 100

int leerEntero();
int *serieFibonacci(int);
int escribirResultado(int, int[]);

int main()
{
	int a = 0;
	int* i;

	printf("Numero de elementos a calcular de la serie: ");
	a = leerEntero();

	printf("Calculando los elementos de la serie.\n");
	i = serieFibonacci(a);

	printf("Elementos de la serie:\n");
	escribirResultado(a, i);

	printf("\n");

	//system("pause>nul");
	//system("pause");
	return 0;
}

int leerEntero()
{
	int r = 0, n = 0;

	while (r == 0)
	{
		r = scanf("%d", &n);
		if (r == 0)
		{
			printf("El dato no es correcto, vuelvalo a introducir: ");
		}
		while (getchar() != '\n');

		while (n > N)
		{
			printf("El valor introducido no puede ser mayor que %d. Introduzca otro: ", N);
			scanf("%d", &n);
		}
	}

	return n;
}

int *serieFibonacci(int n)
{
	int i = 0;
	static int f[N] = { 0 };

	f[0] = 0;
	f[1] = 1;

	for (i = 2; i < n; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
	}

	/*for (i = 0; i < n; i++)
	{
		printf("%d ", f[i]);
	}*/
	return f;
}

int escribirResultado(int n, int arr[])
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}
