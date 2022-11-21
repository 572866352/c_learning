//
// Created by 57286 on 2022/11/20.
//
#include <stdio.h>
#include "../include/printlnf.h"

#define ARRAY_SIZE 5

int main(void) {
  int array[ARRAY_SIZE];
  //  array的本质是一个首地址 array[5]等价于array的地址加5
  PRINTLNF_INT(array[5]);
  int value = 2;
//  如果使用变量就是变长数组（vla)，即数组的长度可以用变量来声明的数组（c99）。gcc支持，msvc不支持
  int array_value[value];
  return 0;
}