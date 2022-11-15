//这是一种引入方式 相对路径 双引号（“”）会搜索本地路径 尖括号（<>）不会搜索本地路径，直接搜索工程路径
//如果想要用尖括号，在cmake文件中include_directories("include") "头文件夹名"

#include "../include/factorial.h"
#include <stdio.h>
unsigned int Factorial(unsigned int n) {
  if(n==0) {
    return 1;
  } else {
    return Factorial(n-1) * n;
  }
}