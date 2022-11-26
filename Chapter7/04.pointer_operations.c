//
// Created by 57286 on 2022/11/26.
//

#include "include/printlnf.h"
#include <stdio.h>

int main(void) {
  int a = 2;
  int *p = &a;
//  +1表示往后移动的类型的位数，这里int是4位
  PRINTLNF_INT(p+1);
  PRINTLNF_INT(p);
  PRINTLNF_INT(sizeof(int));
  double b = 2.0;
  double *cp = &b;
  double **cpp = &cp;
  PRINTLNF_INT(cp+1);
  PRINTLNF_INT(cp);
  PRINTLNF_INT(sizeof(double));
  PRINTLNF_INT(cpp+1);
  PRINTLNF_INT(cpp);
  PRINTLNF_INT(sizeof(double *));

//  在数组中取第4个元素
  int array[] = {0,1,2,3,4};
  int *t = array;
  PRINTLNF_INT(*(t+3));
//  array相当于一个const指针
  PRINTLNF_INT(*(array+3));
  PRINTLNF_INT(t[3]);
  PRINTLBF_BOOL(t+3 > t+1);
  PRINTLBF_BOOL(t+3 == t+3);
  return 0;
}