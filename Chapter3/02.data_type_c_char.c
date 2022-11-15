#include <stdio.h>
/*
 * 字符集ASCII 窄字符
 * %c是字符格式化
 * \后加上八进制数表示字符
 * \x加上十六进制数也可以表示字符
 * \n:newline
 * \b:backspace
 * \r:return
 * \t:table
 * \':'字符字面量
 * \":"字符串字面量
 * 宽字符(wchar_t) unicode  中日韩语 在字符前加上L windows上要把utf-8转成gdk
 * 如果用MingGw则是utf-8
 * C语言把1字节定义为char类型占用的位数（bit）
 * 用单引号被括起来的单个字符称为字符常量
 * */
int main(void){
  char a = 'a';
  char char_1 = '1';
  char i = '\46';
  wchar_t zhong = L'中';
//  在C语言中一个字母对应的数值可以存储在8位的存储单元中，因此可以把4个独立的8位ASCII码存储在一个32位的单元中
//如果把这样的字符常量赋给char类型变量grade，只有最后8位有效
  char grade = 'fate';
  printf("grade: %c\n",grade);
  printf("char a: %c\n",a);
  printf("char_1: %c\n",char_1);
  printf("char i: %c\n",i);
  printf("zhong: %d", zhong);
  return 0;
}