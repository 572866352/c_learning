//
// Created by 57286 on 2022/11/21.
//
#include <stdio.h>
#include "../include/printlnf.h"
int main(void) {
  char string[11] = "hello world";
  for (int i = 0; i < 11; ++i) {
    PRINTLNF_CHAR(string[i]);
  }
//  c语言中字符数组与字符串有区别，字符串必须以null（\0）结尾
//  在这里实际上是数组越界了，导致最后一位一直向后找
  PRINTLNF_STRING(string);
//  留出一位给null即可
  char string1[12] = "hello world";
  PRINTLNF_STRING(string1);
//  可以不写字符串大小，会自动分配
  char string2[] = "hello world";
  PRINTLNF_STRING(string2);
//  中文，msvc用gbk编码，mingw用utf-8编码
  char string_ch[] = "你好，中国";
  PRINTLNF_STRING(string_ch);
//  可以用宽字符定义中文,但存储的是Unicode码点
  wchar_t ws[] = L"你好，中国";
  PRINTLNF_INT(ws);
  return 0;
}