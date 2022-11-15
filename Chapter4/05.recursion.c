#include <stdio.h>

unsigned int Factorial(unsigned int n) {
  if(n == 0) {
    return 1;
  } else {
    return n* Factorial(n-1);
  }
}

//f(n) = f(n-1) + f(n-2)
unsigned int Fibonacci(unsigned int n) {
  if (n ==1 || n == 0) {
    return n;
  } else {
    return Fibonacci(n-1)+ Fibonacci(n-2);
  }
}

int main(void) {
  printf("10!:%d\n", Factorial(10));
  printf("fibonacci:%d\n", Fibonacci(10));
  return 0;
}