//
// Created by 57286 on 2022/11/27.
//
#include <stdio.h>
#include "include/printlnf.h"
#include <string.h>
#include <stdlib.h>

void SWAP1(void *first,void *second,size_t size) {
  void *temp = malloc(size);
  if(temp) {
//    内存拷贝 要引入头文件string.h
    memcpy(temp,first,size);
    memcpy(first,second,size);
    memcpy(second,temp,size);
    free(temp);
  } else {

  }
}
//只有gcc可用。不用do while可能会出现奇怪的语句
#define SWAP2(x,y) do {typeof(x) temp = x; x = y;y = temp;} while(0);

int main(void) {
  double x = 4.0;
  double y = 3.0;
//  SWAP1(&x,&y, sizeof(double));
  SWAP2(x,y);
  PRINTLNF_DOUBLE(x);
  PRINTLNF_DOUBLE(y);
  return 0;
}