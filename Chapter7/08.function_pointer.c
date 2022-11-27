//
// Created by 57286 on 2022/11/27.
//

#include "include/printlnf.h"
#include <stdio.h>
#include <stdlib.h>

#define PLAYER_COUNT 10

//返回一个int指针,f1()的优先级更高
int *f1(int,double);
//一个函数指针，返回一个整形
int (*f2)(int,double);
//一个函数指针，返回int指针
int *(*f3)(int,double);
//非法语法
//int (*f4)(int,double)[];
//数组函数指针可以，[]的优先级比*高
int (*f5[])(int,double);
//指针数组不行
//int (*f5)[](int,double);

//定义类型名，在这里可以把Func做为一个类型名(别名)
typedef int (*Func)(int, double);
typedef int INTARRAY[];

//因为即使用动态内存，变量还是会被销毁（调用时无法找到分配好的内存地址），因此用指针的指针
void INITPOINTER(int **ptr,int lenth,int default_value) {
//  给指针指向的指针赋值 **ptr(&players即players的地址，它的类型是一个指针的指针)——>*players（malloc）
  *ptr = malloc(sizeof(int) * lenth);
  for (int i = 0; i < lenth; ++i) {
    (*ptr)[i] = default_value;
  }

}

int add(int a,double b) {
  return (int) (a+b);
};

int main(void) {
  int *p;
  PRINTLNF_HEX(&main);
  PRINTLNF_HEX(&INITPOINTER);
//  定义函数指针
  void (*func)(int **ptr,int lenth,int default_value) = &INITPOINTER;
  func(&p,10,0);
//  这样也可以调用函数，但是没必要
  (*INITPOINTER)(&p,10,0);
  PRINTLNF_INT_ARRAY(p,10);
  free(p);

  Func func1 = &add;
  int result = func1(1,3.0);
  PRINTLNF_INT(result);
  INTARRAY au = {1,2,3,4,5};
  PRINTLNF_INT_ARRAY(au,5);
  return 0;
}