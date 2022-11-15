#include <stdio.h>
/*
 * about variable
 * */


int main(void) {
//  <type> <name>
  int value;
//  <type> <name> = <initialize value>
  int value_init = 3;
  value = 6;
  value_init = 5;
  printf("value: %d\n", value);
  value_init = value;
  printf("size of value: %llu\n", sizeof(value));
  printf("address of value: %x\n", &value);
  return 0;
}