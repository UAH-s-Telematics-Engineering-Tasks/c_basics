#include <stdio.h>
int main ()
{
 char car1, car2;
 unsigned int ent1;
 short int ent2;
 long lon;
 float real;
 double dob;

 printf ("Constants and variables of type integer and real\n");

printf("Size of dob: %d\n", sizeof(dob));

 ent1 =   (int) (300 * 1.5 + 0x14); /* (a) */
 ent2 =  (int) (301 * 1.5 + 0x14); /* (b) */
 printf ("\nExample 1:\n");
 printf ("ent1 = %d\tent2 = %d\n", ent1, ent2); /* (c) */
 car1 = ent1; /* (d) */
 car2 = ent2 - ent1; /* (e) */
 printf ("\nExample 2:\n");
 printf ("car1 = %d\tcar2 = %d\n", car1, car2);
 lon = 200000; /* (f) */
 ent1 = 200000; /* (g) */
 ent2 = 200000; /* (h) */
 printf ("\nExample 3:\n");
 printf ("lon occupies %d bytes.\t", sizeof(lon));
 printf ("Its value is: %ld\n", lon);
 printf ("ent1 occupies %d bytes.\t", sizeof(ent1));
 printf ("Its value is: %d\n", ent1);
 printf ("ent2 occupies %d bytes.\t", sizeof(ent2));
 printf ("Its value is: %d\n", ent2);
 real = lon; /* (i) */
 printf ("\nExample 4:\n");
 printf ("real occupies %d bytes.\t", sizeof(real));
 printf ("Its value is: %f\n", real);
 real = 12345.6789; /* (j) */
 dob = 12345.6789; /* (k) */
 printf ("\nExample 5:\n");
 printf ("real = %f\n", real);
 printf ("dob = %lf\n", dob);
 return 0;
}
