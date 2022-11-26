//
// Created by 57286 on 2022/11/26.
//

#include <stdio.h>
#include "include/printlnf.h"


int *POINTER_AT_LARGE;
void DANGEROUS() {
  int a = 2;
  //野指针很危险，一个全局指针指向了一个自动变量
  POINTER_AT_LARGE = &a;
//  最好是在销毁自动变量时初始化全局指针
  POINTER_AT_LARGE = NULL;
}



int main(void) {
//  硬编码很危险
//  int *p = (int *)0x5ffe18;
//  PRINTLNF_INT(p);
//  PRINTLNF_HEX(&p);
//  PRINTLNF_INT(*p);

//赋NULL表示什么都不赋值，可用于初始化
  int *p = NULL;
  DANGEROUS();
  PRINTLNF_INT(*POINTER_AT_LARGE);
  return 0;

}