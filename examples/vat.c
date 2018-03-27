#include <stdio.h>

float VAT_calc(float perc, float pri);

int main (void) {
    float price, percentage, vat;
    int swch, vat_int;
    do {
    printf("Hello, welcome to our VAT calculator.\n");
    printf("====================\n");
    printf("Input a price to scan, please: ");
    scanf("%f", &price);
    printf("What percentage should we apply?: ");
    scanf("%f", &percentage);
    float total = price * (1 + (percentage/100));
    vat = price * percentage/100;
    printf("\nYour final price is: %g\n", total);
    printf("VAT applied: %g\n\n", vat);
    printf("When using int values:\n");
    printf("====================\n");
    vat_int = (int) price * (int) percentage/100;
    printf("VAT with ints: %d\n\n", vat_int);
    printf("When using int values and rounding:\n");
    printf("====================\n");
    vat_int = ((int) price * (int) percentage + 50)/100; //This is like: (price *percentage)/100 + 50/100 =
    printf("VAT with ints and rounding: %d\n\n ", vat_int); // = (price * percentage)/100 + 0.5
    //system("pause");                                   // The 0.5 rounds the price.
    printf("Whith functions:\n");
    printf("====================\n");
    vat = VAT_calc(percentage, price);
    printf("VAT with float functions: %g\n\n", vat);
    printf("Press 1 for using this service again!");
    scanf("%d", &swch);
  } while (swch == 1);
  printf("\nThanks for using our service!\n\n");
  return 0;
}

float VAT_calc(float perc, float pri) {
  float vat;
  vat = pri * perc / 100;
  return vat;
}
