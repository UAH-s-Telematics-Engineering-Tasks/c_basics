#include <stdio.h>
#include <math.h>

int digPow(int n, int p);

int main(void) {
  int n, p;
  printf("n: ");
  scanf("%d", &n);
  printf("p: ");
  scanf("%d", &p);
  printf("k: %d\n", digPow(n, p));
  return 0;
}

//int digPow(int n, int p) {
  int divider = 1, breaker, counter = 0, test = 0, N_separator = n;
  do {
    breaker = n / divider;
    divider *= 10;
    if (breaker != 0) {
    counter++;
    }
  } while(breaker != 0);
  printf("Counter: %d\n", counter);
  for (int i = 0; i < counter; i++) {
    //printf("curr_digit_1: %d\n", N_separator/(int) pow(10, (counter - (i +1))));
    test += pow(N_separator/(int) pow(10, (counter - (i + 1))), p + i);
    N_separator = n - (n / (int) pow(10, counter - (i + 1)) * (int) pow(10, counter - (i + 1)));
    //printf("test: %d\n", test);
    /*if (i == 0) {
      total += pow(n/(int) pow(10, (counter - 1)), p);
    }*/
    //printf("curr_digit_2: %d\n", N_separator);
    /*if (counter - 1 == i) {
        printf("curr_digit_v2: %d\n", n - (int) pow(10, counter - 1) * (n / (int) pow(10, (counter - 1))));
      test += pow(n - (int) pow(10, counter - 1) * (n / (int) pow(10, (counter - 1))), (p + i));
      }*/
      /*else {
      test += pow(n - (n / (int) pow(10, (counter - (i + 1))) * (int) pow(10, counter -(i + 1))), (p + i));
      printf("test: %d\n", test);
      }*/
  }
  int k = test / n;
  printf("k: %d\n", k);
  if (k > 0) {
    return k;
    }
  else {
    return -1;
  }
}

int digPow(int n, int p) { //final_solution
  int divider = 1, breaker, counter = 0, test = 0, N_separator = n;
  do {
    breaker = n / divider;
    divider *= 10;
    if (breaker != 0) {
    counter++;
    }
  } while(breaker != 0);
  for (int i = 0; i < counter; i++) {
    test += pow(N_separator/(int) pow(10, (counter - (i + 1))), p + i);
    N_separator = n - (n / (int) pow(10, counter - (i + 1)) * (int) pow(10, counter - (i + 1)));
  }
/*float k = (float) test / n;
  if (k <= 0 || (int) k != k) {
    return -1;
    }
  else if (k > 0) {
    return k;
  }*/
  if (test % n == 0) { //Way better!
    return test / n;
  }
  else {
    return -1;
  }
}

//int digPow(int n, int p)
  {
  int length = floor(log10(abs(n))) + 1;
    int num_array[length];
    int counter = 0;
    int copy = n;
    while (copy > 0)
    {
        int digit = copy % 10;
        num_array[counter] = digit;
        copy /= 10;
        counter++;
    }

    int sum = 0;
    int j = p;
    for (int i = length - 1; i > -1; i--)
    {
        sum = sum + pow(num_array[i], j);
        j++;
    }

    if (sum % n == 0)
    {
        return (sum / n);
    }
    else
    {
        return -1;
    }
} //log solution!!
