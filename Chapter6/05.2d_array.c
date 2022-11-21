//
// Created by 57286 on 2022/11/21.
//

#include <stdio.h>
#include "../include/printlnf.h"

//二维或多维数组做为参数要这样，array是首地址
//vla（c99）,gcc支持，msvc不支持
//返回一个数组要在参数里存一个
void SUMINTARRAY(int rows,int columns,int array[rows][columns],int result[]) {
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < columns; ++j) {
      result[i] += array[i][j];
    }
  }
}

int main(void) {
  int vehicle_limit[5][2] = {
      {1,2},
      {2,4},
      {3,7},
      {4,8},
      {5,10}
  };
//  也可以这样定义，同时可以制定位置
  int test_num[5][2] = {
      1,3,4,5,[2][0] = 7,9,0,
      1,4,7
  };
  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 2; ++j) {
        vehicle_limit[i][j] = i+j;
    }
  }
  int test[5] = {1,2,3,4,5};
  PRINTLNF_INT_ARRAY(test,5);
  int result[5] = {0};
  SUMINTARRAY(5,2,test_num,result);
  PRINTLNF_INT_ARRAY(result,5);
  return 0;
}