#include <stdio.h>

//形式参数
double F(double x, double y) {
  return x * x + y * y + 2 * x * y;
}

int main(void) {
  /*函数结构
   * <return type><name>(<parameters>){
   * ...statement
   * ...return <return value>;
   * }
   * */
  puts("hello world");
//  实际参数
  double f_value = F(3.0, 4.0);
  printf("result of f:%F\n", f_value);
  return 0;
}

