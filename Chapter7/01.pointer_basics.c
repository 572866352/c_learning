#include <stdio.h>
#include "include/printlnf.h"

int main() {
  int a;
  scanf("%d",&a);
//  a的地址的类型就是一个指针,指针就是一个普通变量，存的是地址
  int *p = &a;
  PRINTLNF_HEX(p);
  PRINTLNF_INT(sizeof(int *));
//  *是取出指针指向的值，&是取地址
  PRINTLNF_INT(*p);
  int **pp = &p;

  return 0;
}
