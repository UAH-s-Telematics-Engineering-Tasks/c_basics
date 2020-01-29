#include <stdio.h>

void act1(void) {
  for (int x = 100; x >= 1; x++) {
    printf("%d\n", x);
  }
}

void act2(void) {
  int value;
  switch (value % 2) {
    case 0:
      printf("Even integer\n");
      break;
    case 1:
      printf("Odd integer\n");
  }
}

void act3(void) {
  int intVal;
  scanf("%d", &intVal);
  char charVal = getchar();
  printf("Integer: %d\nCharacter: %c", intVal, charVal);
}

void act4(void) {
  for (float x = .000001; x == .0001; x += .000001) {
    printf("%.7f\n", x);
  }
}

void act5(void) {
  for ( int x = 999; x >= 1; x -= 2 ) {
    printf( "%d\n", x );
  }
}

void act6(void) {
  int counter = 2;
  do {
    if ( counter % 2 == 0 ) {
      printf( "%d\n", counter );
    }
    counter += 2; //If we increment by two units we dont really need the if clause!
  } while ( counter <= 100 );
}

void act7(void) {
  int  total = 0;
  for ( int x = 100; x <= 150; x++ ) {
    total += x;
  }
  printf("Total: %d\n", total);
}
