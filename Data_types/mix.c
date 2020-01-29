#include <stdio.h>

enum day_of_week
{
 Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};

typedef enum day_of_week tDayOfWeek;

int main ()
{
 tDayOfWeek Today = Monday;
 int a = 100, b = 7, c, d;
 float f = 7.0, g;
 printf ("Today is %d\n\n", Today); /* (a) */
 Today = (tDayOfWeek) 3; /* (b) */
 printf ("Now, Today is %d\n\n", Today);
 if (Today == Thursday) {
   printf("Thursday!\n\n");
 }
 c = b / a; /* (c) */
 d = f / a; /* (d) */
 g = (float) b / a; /* (e) */
 printf ("c = %d, d = %d, g = %f\n\n", c, d, g);
 c = (int)((f * a)) % 13; /* (f) */
 printf ("Now c = %d\n", c);
 return 0;
}
