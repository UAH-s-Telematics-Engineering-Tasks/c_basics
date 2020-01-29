//practica2.c
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

//DECLARING FUNCTIONS
int menu(); //declaring the function menu

int main() {
	//Case variables
	int bits, num, shift_p, shift_r;
	long fct, num_fct;
	//DEFINING VARIABLES
	int option; // option chosen in the menu
	printf("PRACTICAL ASSIGNMENT 2 \n");
	printf("==========\n");
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
			printf("\n Your shifted number is: %d\n", shift_r);
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
			printf("Activity 4: set a bit to 0");
			printf("Enter a number to alter: ");
			scanf("%d", &num);
			printf("Position to change: \n");
			scanf("%d", &shift_p );
			shift_r = swap_bit(num, shift_p);
			printf("Your new int is %d\n", shift_r);
			break;
		case 5:
			printf("Activity 5: factorial\n");
			//call "factorial"
			do
			{
			printf("Number to compute its factorial: ");
			scanf("%ld", &num);
			if (num< 0) {
				printf("The number must be positive!\n");
			}
		}
			while (num < 0);
			fct = factorial(num);
			if (fct == -1) {
				printf("We cannot compute that factorial!\n");
			} else {
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
		}
			while (num < 0);
			//bits = num_bits(num);
			printf("The number of bits needed to express %d is %d\n", num /*bits*/);
			break;
		case 7:
			printf("Activity 7: change bits\n");
			//call "chg_bits"
			break;
		case 8:
			printf("Activity 8: swap\n");
			//call "swap"
			break;
		case 9:
			printf("Activity 9: mean\n");
			//call "mean"
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
int menu() //"menu" definition
{
	int op;
	do //repetitive statement
	{
		system("cls");
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
	}
	while (op < 1 || op > 10); //condition
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
void logic_ops()
{
 int a = 8, b = 0, c = 15, d = 93, e, r1, r2, r3, r4, r5, r6;
 r1 = a && b || c && !d; //false
 r2 = !a || b && c || d; //false
 r3 = a < b || !c > d; //false
 r4 = a + b > d - c; // false
 r5 = a && b && !c || !(a && b) && c; //true
 a = 0x12; b = 0x56; c = 0x9a ; d = 0x0f ; e = 0360;
 r1 = a & b | c; //0x9a
 r2 = c & 0177;	//0x1a
 r3 = ~a | b ^ c;	//0xed
 r4 = e & c;	//0x90
 r5 = r4 & ~077;	//0x0
 r6 = (a & d) << 4 | (a & e) >> 4;	//0x21; 33d
 }

//swap_bit
int swap_bit(int number, int pos_chg) {
	int mask = 1 << pos_chg;
	int result = number & (~mask);
	return result;
}

//factorial
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
		return (n * fact1(n-1));
	}
}

//num_bits
/*int num_bits (int n) {
	for (int i = 1; i > 0; i++) {
		if (2**i >= n){
			return i;
			break;
		}
	}




}*/
