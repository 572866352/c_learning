#include <stdio.h>
//使用宏(macro)定义常量,相当于把所以出现的COLOR_RED替换为0xFF0000
// 终端输入gcc -E .\05.constant.c -o output.c 生成outp.c 把stdio.h展开
#define COLOR_RED 0xFF0000
/*
 * 常量 or 只读变量
 * 真正的常量：字面量（literal）
 * 不要硬编码(hard code),即代码中不要出现那些值，而要用宏定义名字*/


int main(void){
//  const <type> read only variable
  const int kred =0xFF0000;
  const int kgreen = 0x00FF00;
  const int kblue = 0x0000FF;
  printf("kred: %d\n",kred);
//  得到kred的内存，因此实际上还是可以修改
  int *p_k_red =&kred;
  *p_k_red = 9;
  printf("kred: %d\n",kred);
  printf("COLOR_RED: %d\n",COLOR_RED);
//把宏取消掉
/*#undef COLOR_RED
  printf("COLOR_RED: %d\n",COLOR_RED);
  */
  return 0;
}