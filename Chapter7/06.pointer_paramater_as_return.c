//
// Created by 57286 on 2022/11/26.
//

//使用指针参数做为返回值的作用：避免函数返回值带来的开销；实现函数的多个返回值的目的

#include <stdio.h>
#include "include/printlnf.h"

int SUMINTARRAY(int array[],int lenth) {
  int sum = 0;
  for (int i = 0; i < lenth; ++i) {
    sum +=array[i];
  }
  return sum;
}

int main(void) {
  int array[] = {1,2,3,4,5};
  int sum = SUMINTARRAY(array,5);
  PRINTLNF_INT(sum);
  return 0;
}