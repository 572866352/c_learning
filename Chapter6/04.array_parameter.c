//
// Created by 57286 on 2022/11/21.
//
#include <stdio.h>
#include "../include/printlnf.h"

//要把长度做为参数传递进来
int SUM_INT_ARRAY(int array[],int lenth) {
  int sum = 0;
  for (int i = 0; i < lenth; ++i) {
    sum += array[i];
  }
  return sum;
}

int main(void) {
  int array[3] = {3,6,9};
  PRINTLNF_INT(SUM_INT_ARRAY(array,3));
  return 0;
}