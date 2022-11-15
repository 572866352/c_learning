#include <stdio.h>
#include <stdarg.h>


void HandleVarargs(int arg_count,...) {
//  定义va_list用于获取变长参数
  va_list args;
//  告诉C语言从arg_count开始传递参数(不包括arg_count)
  va_start(args,arg_count);
//  遍历变长参数
  for (int i = 0; i < arg_count; ++i) {
//    取出对应的参数(va_list,type)
    int arg = va_arg(args,int);
    printf("%d:%d\n",i,arg);
  }
//  结束遍历
  va_end(args);
}

int main(void) {
  HandleVarargs(5,1,3,4,5,8);
  return 0;
}