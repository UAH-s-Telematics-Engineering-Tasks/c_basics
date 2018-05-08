#include <stdio.h>

int main(void) {
 int a = 5, b = 0, c = 10, d = 3, e;
 a *= d++;
 b = d--;
 c /= d++;
 e = b++ + ++d;
 printf (" a = %d\n", a);
 printf (" b = %d\n", b);
 printf (" c = %d\n", c);
 printf (" d = %d\n", d);
 printf (" e = %d\n", e);
 return 0;
}
