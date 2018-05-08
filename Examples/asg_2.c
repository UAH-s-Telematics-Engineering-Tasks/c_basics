//practica2.c
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

//DECLARING FUNCTIONS
int menu();
int shift(int number, int shift_times);
int even_odd(int num);
int logic_ops();
int swap_bit(int number, int pos_chg);
int factorial(int n);
int fact1(int n);
int num_bits(int n);
int invr_bits(int n, int pos);
void swap(double *x, double *y);
double tmp;
double mean(double m1, double m2, double m3, double m4);
double mean_arr(double arr[5], int i);
double mean_dy_arr(double arr[], int i);

int main() {
	//Case variables
	int bits, num, shift_p, shift_r;
	long fct, num_fct;
	double d1, d2, n1, n2, n3, n4, mn;
	//DEFINING VARIABLES
	int option; // option chosen in the menu
	printf("PRACTICAL ASSIGNMENT 2 \n");
	printf("==========\n");
	system("pause>null");
	option = menu(); //call the "menu " function
	while (option != 10) //repetitive statement
	{
		switch (option) //conditional statement
		{
		case 1:
			printf("Activity 1: shift\n");
			//call "shift"
			printf("Enter a number to shift: ");
			scanf("%d", &num);
			printf("Enter positions to shift: ");
			scanf("%d", &shift_p);
			shift_r = shift(num, shift_p);
			printf("Your shifted number is: %d\n\n", shift_r);
			break;
		case 2:
			printf("Activity 2: even or odd\n");
			//call "even or odd"
			printf("Enter a number: ");
			scanf("%d", &num);
			if (even_odd(num) != 0) {
				printf("Your number %d is not divisible by 2 \n\n", num);
			}
			else {
				printf("Your number %d is divisible by 2 \n\n", num);
			}
			break;
		case 3:
			printf("Activity 3: logic and bitwise operations\n");
			//call "logic & bitwise"
			logic_ops();
			break;
		case 4:
			printf("Activity 4: set a bit to 0\n");
			printf("Enter a number to alter: ");
			scanf("%d", &num);
			printf("Position to change: ");
			scanf("%d", &shift_p);
			shift_r = swap_bit(num, shift_p);
			printf("Your new int is %d\n\n", shift_r);
			break;
		case 5:
			printf("Activity 5: factorial\n");
			//call "factorial"
			do
			{
				printf("Number to compute its factorial: ");
				scanf("%d", &num);
				if (num< 0) {
					printf("The number must be positive!\n\n");
				}
			} while (num < 0);
			fct = factorial(num);
			if (fct == -1) {
				printf("We cannot compute that factorial!\n\n");
			}
			else {
				printf("The factorial of %d is: %d\n\n", num, fct);
			}
			break;
		case 6:
			printf("Activity 6: number of bits\n");
			//call "num_bit"
			do
			{
				printf("Number to compute its bits: ");
				scanf("%d", &num);
				if (num < 0) {
					printf("The number must be positive!\n");
				}
			} while (num < 0);
			bits = num_bits(num);
			printf("The number of bits needed to express %d is %d\n\n", num, bits);
			break;
		case 7:
			printf("Activity 7: change bits\n");
			//call "chg_bits"
			do
			{
				printf("Enter a number to alter: ");
				scanf("%d", &num);
				if (num < 0) {
					printf("The number is negative, enter a positive int\n");
				}
			} while (num < 0);
			do {
				printf("Enter the position from which the changes will take place: ");
				scanf("%d", &bits);
				if (bits < 0) {
					printf("Enter a positive position!\n");
				}
			} while (bits < 0);
			printf("Number of bits to alter: ");
			scanf("%d", &shift_p);
			if (bits != shift_p) {
				printf("Number of bits not valid!\n");
				break;
			}
			shift_r = invr_bits(num, bits);
			printf("Your final number is: %d\n", shift_r);
			break;
		case 8:
			printf("Activity 8: swap\n");
			//call "swap"
			printf("value of d1: ");
			scanf("%lf", &d1);
			printf("value of d2: ");
			scanf("%lf", &d2);
			printf("Values before swapping: d1 = %g \t d2 = %g\n", d1, d2);
			swap(&d1, &d2);
			printf("Values swapped: d1 = %g \t d2 = %g\n", d1, d2);
			break;
		case 9:
			printf("Activity 9: mean\n");
			//call "mean"
			printf("First number: ");
			scanf("%lf", &n1);
			printf("Second number: ");
			scanf("%lf", &n2);
			printf("Third number: ");
			scanf("%lf", &n3);
			printf("Fourth number: ");
			scanf("%lf", &n4);
			double mn = mean(n1, n2, n3, n4);
			double arr_mean[5] = {n1, n2, n3, n4 };
			double mn_arr = mean_arr(arr_mean, 4);
			/*printf("Enter the size of the array: ");
			int size;
			scanf("%d", &size);*/
			double mn_dy_arr[/*size*/4] = { n1, n2, n3, n4 };
			printf("Your mean is: %g\n", mn);
			printf("Your array\'d mean is: %g\n", mn_arr);
			break;
		default:
			printf("ERROR: wrong option.\n");
			break;
		}
		system("pause"); //call to "system" function

		option = menu();
	}
	//return 0;
}

//DEFINING FUNCTIONS
int menu() { //"menu" definition
	int op;
	//system("pause"); (I added it)
	do //repetitive statement
	{
		system("cls");
		printf("PRACTICAL ASSIGNMENT 2 \n");
		printf("==========\n");
		printf("\n"
			"\t01.- Activity 1\n"
			"\t02.- Activity 2\n"
			"\t03.- Activity 3\n"
			"\t04.- Activity 4\n"
			"\t05.- Activity 5\n"
			"\t06.- Activity 6\n"
			"\t07.- Activity 7\n"
			"\t08.- Activity 8\n"
			"\t09.- Activity 9\n"
			"\t10.- Exit\n"
			"\n"
			"Choose an option: ");
		scanf("%d", &op); //call to "scanf"
		if (op < 1 || op > 10) //conditional statement
		{
			printf("Option not valid. \n");
			system("pause"); //stop until key pressed
		}
	} while (op < 1 || op > 10); //condition
	return op;
}

//shift
int shift(int number, int shift_times) {
	int result = number >> shift_times;
	return result;
}

//even/odd
int even_odd(int num) {
	int test = num % 2;
	return test;
}

//operations
int logic_ops() {
	int a = 8, b = 0, c = 15, d = 93, e, r1, r2, r3, r4, r5, r6;
	r1 = a && b || c && !d; //false
	r2 = !a || b && c || d; //true
	r3 = a < b || !c > d; //false
	r4 = a + b > d - c; // false
	r5 = a && b && !c || !(a && b) && c; //true
	a = 0x12; b = 0x56; c = 0x9a; d = 0x0f; e = 0360;
	r1 = a & b | c; //0x9a
	r2 = c & 0177;	//0x1a
	r3 = ~a | b ^ c;	//0xffffffed
	r4 = e & c;	//0x90
	r5 = r4 & ~077;	//0x80
	r6 = (a & d) << 4 | (a & e) >> 4;	//0x21; 33d
}

//swap_bit
int swap_bit(int number, int pos_chg) {
	int mask = 1 << pos_chg;
	int result = number & (~mask);
	return result;
}

//factorial 1
int factorial(int n) {
	if (n < 0 || n > 16) {
		printf("The input value is not viable.\n");
		return -1;
	}
	else {
		int fact = n;
		for (int i = 1; i < n; i++) {
			fact = (n - i) * fact;
		}
		return fact;
	}
}

//factorial 2
int fact1(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return (n * fact1(n - 1));
	}
}

//num_bits
int num_bits(int n) {
	int powerN = 2, numbits = 1;
	while (powerN <= n) {
		powerN = 2 * powerN;
		numbits++;
	}
	return numbits;
}

//Invert_bits
int invr_bits(int n, int pos) {
	int mask = 0;
	int powerN = 1;
	for (int i = 1; i <= pos; i++) {
		powerN = powerN * 2;
		mask = mask + powerN;
	}
	int result = n ^ mask;
	return result;
}

//Swap_doubles
void swap(double *x, double *y) {
	double tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

//mean
double mean(double m1, double m2, double m3, double m4) {
	double total = m1 + m2 + m3 + m4;
	double result = total / 4;
	return result;
}

//mean w/ arrays
double mean_arr(double arr[5], int i) {
	double result = 0;
	for (int n = 0; n < i; n++) {
		double step1 = arr[n] / 4;
		result = result + step1;
	}
	return result;
}
//mean w/ dynamic arrays
double mean_dy_arr(double arr[], int i) {
	double result = 0;
	for (int n = 0; n < i; n++) {
		double step1 = arr[n] / i;
		result = result + step1;
	}
	return result;
}
