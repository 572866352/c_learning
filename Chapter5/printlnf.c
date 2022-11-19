#include <stdio.h>
#include <stdarg.h>
//实现不用打换行符
void Printlnf(const char* format,...) {
  va_list args;
  va_start(args,format);
//  v开头的版本接受valist
  vprintf(format,args);
  printf("\n");
  va_end(args);
}

//也可以用宏的方式实现
//字符串的联立"helloworld""\n"等价于"helloworld\n"
//__VA_ARGS__是一个接受变长参数的宏 __LINE__是表示行号的宏 __FUNCTION__是表示函数名的宏 __FILE__是表示文件名的宏
//加两个#号可以忽略掉前面的逗号
#define PRINTLNF(format,...) printf("("__FILE__":%d)%s:"format"\n",__LINE__,__FUNCTION__,##__VA_ARGS__)

//#value将value转化成字符串，即value传递的是什么就将其变成字符串
#define PRINT_INT(value) PRINTLNF(#value": %d",value)

int main(void) {
  int value = 2;
  int x = 3;
  Printlnf("hello world %d",value);
  PRINTLNF("hello world %d",value);
  PRINTLNF("hello world");
  PRINT_INT(x);
  return 0;
}