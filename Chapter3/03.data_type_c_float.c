#include <stdio.h>
/*
 * 单精度浮点要加f
 * 单精度有效数只能到6位（视计算机而定可能会到6~8位）
 * 小技巧：可以扩大数字来计算
 * 双精度可能会有15~16位
 * 系统存储一个浮点数要占用32位，其中8位用于表示指数的值和符号，剩下24位用于表示非指数部分
 * 一般情况下double占用64位，一些系统将多出的32位全部用来表示非指数部分
 * */


int main(void) {
//  基本形式：有符号的数字（包括小数点），后面紧跟e和E，最后一个是有符号数表示10的指数
//  可以没有小数点或指数部分，但不能同时省略两者
// 可以省略小数部分或整数部分，但不能同时省略两者
  float a = 3.14e-3;
  float b = .3e+2;
  float c = .2e4;
  float d = 100.;
  float a_float = 3.14f;
  double b_double = 3.14;
//  默认情况下编译器假定浮点型常量是double类型的精度，计算使用双精度，然后截断成float类型的宽度
//可以在浮点数后加上f或F后缀以覆盖默认设置，编译器会将浮点型常量看作float类型
  float lat = 3.14159f;
//  %f打印十进制记数法的float和double类型浮点数，%e打印指数记数法的浮点数
  printf("a:%f b:%f c:%f d:%f\n", a, b, c, d);
  printf("float-: %f\n", 3.14159265f - lat);
  printf("real-: 0.00000265\n ");
  printf("size of a_flot: %llu\n", sizeof(float));
  printf("size of b_double: %llu\n", sizeof(double));
//  上溢会赋给变量一个无穷大的特定值（显示为inf或infinity）
  float toobig = 3.14e38 * 100.0f;
  printf("toobig: %f",toobig);
  return 0;
}
