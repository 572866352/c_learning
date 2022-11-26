//
// Created by 57286 on 2022/11/26.
//

#include <stdio.h>
#include "include/printlnf.h"

int main(void) {
  int a;
  int b;
  int *p = &a;
  *p = 20;
  PRINTLNF_INT(a);
//  倒着念一个const的指针是int类型
  int *const cp = &a;
//  cp = &b;不行
//  一个const的指针指向了一个const的int
  int const *const ccp = &a;
//  *ccp = 2;不行
  int const *cpp = &a;
//  可以修改指针指向，不能修改值
  return 0;
}