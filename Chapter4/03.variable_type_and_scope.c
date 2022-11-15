#include <stdio.h>

//文件作用域
int global_var = 1;

//函数原型作用域
//double Sort(int size,int array[size]);

void LocalStaticVar(void) {
//  静态变量（具有文件作用域） 静态变量一直存在文件里，不会被销毁 即使不被赋初值也会赋0
  static int static_var;
//  每次调用static_var会加1
  printf("static_var:%d\n",static_var++);
}

void PassByMemory(int parameter) {
  printf("%d\n",parameter);
}
//寄存器变量，可以在汇编里看（插件compiler explorer）
void PassByRegiter(register int parameter) {
  printf("%d\n",parameter);
}

int main(void) {
//  自动变量 auto是默认的（这里等价于int value） auto是变量的类型 int是变量的数据类型
//  自动内存销毁 进入函数作用域自动分配内存 离开就销毁
  auto int value = 0;
  {
//    块作用域
//    if else也是块作用域
    auto int a = 0;
  }
  LocalStaticVar();
  LocalStaticVar();
  LocalStaticVar();
  return 0;
}