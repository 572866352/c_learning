#include <stdio.h>
#define ARRAY_SIZE 10
#include "../include/printlnf.h"
int main(void) {
  int array[10];
  for (int i = 0; i < ARRAY_SIZE; ++i) {
    array[i] = i;
    PRINTLNF_INT(array[i]);
  }
  int array_2[ARRAY_SIZE] = {0,1,2,3,4,5,6,7,8,9};
  for (int i = 0; i < ARRAY_SIZE; ++i) {
    PRINTLNF_INT(array_2[i]);
  }

  double array_3[5] = {1.3,4.5};
  for (int i = 0; i < 5; ++i) {
//    如果没有填数字会自动赋0
    PRINTLNF_DOUBLE(array_3[i]);
  }

  //  可以这样赋默认值（c99），后面再接逗号会从赋值的位置向后赋值

  char array_char[5] = {[2] = 'x','y','z'};
  for (int i = 0; i < 5; ++i) {
    PRINTLNF_CHAR(array_char[i]);
  }
  return 0;
}
