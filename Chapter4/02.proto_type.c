#include <stdio.h>

//函数原型，只要有就能在编译时找到，无论函数实现与否
//有了他就能在头文件定义
//这是一个声明
void EmptyParamList(void);
//int Add(int left,int right);
/*
 * 函数的调用需要
 * 1.函数名
 * 2.函数返回值类型，如果没写默认int
 * 3.函数的参数列表，参数类型和参数的顺序，参数形参名不重要
 * 函数原型就是做以上的事
 * */

//如果不填void的话，c语言不知道有几个参数，而不是默认为没有参数
int main(void) {
//  Add(5,6);
  EmptyParamList();
  return 0;
}

void EmptyParamList(void) {
  puts("hello world");
}