//
// Created by 57286 on 2022/11/26.
//

#include "include/printlnf.h"
#include <stdio.h>

int main(void) {
//  左值是内存空间，右值是值或内存空间中的值
  int a;
  a = 2;

  int *p = &a;
  *p = 2;
  return 0;
}