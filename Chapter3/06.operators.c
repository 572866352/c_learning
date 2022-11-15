#include <stdio.h>

int main(void) {
  int first = 0;
  int second;
  int third;
//  = 赋值运算符
//  second = first 表达式
  third = second = first;

  int left, right;
  left = 2;
  right = 3;
//  先运算再赋值
  int sum = left + right;
  int diff = left - right;
  int product = left * right;
  int quotient = left / right;
//  取余数
  int remainder = left % right;

//  关系运算符 ture = 1 false = 0 直到c99才有bool类型
  printf("3 > 2: %d\n", 3 > 2);
  printf("3 < 2: %d\n", 3 < 2);
  printf("3 >= 2: %d\n", 3 >= 2);
  printf("3 <= 2: %d\n", 3 <= 2);
  printf("3 == 2: %d\n", 3 == 2);
  printf("3 != 2: %d\n", 3 != 2);

//  逻辑运算符 &&与 ||或
  printf("3 > 2 && 3 < 2: %d\n", 3 > 2 && 3 < 2);
  printf("3 > 2 || 3 < 2: %d\n", 3 > 2 || 3 < 2);

//  自增++ 自减--
  int i = 1;
  int j = i++;
  int k = ++i;
  printf("i: %d\n", i);
  printf("j=i++: %d\n", j);
  printf("k=++i: %d\n", k);

//  位运算符 &:相同为1，不同为0 |：有1为1，全0为0  ^：不同为1，相同为0 ~：1得0，0得1
//2^0,0001
#define FLAG_VISIBLE 0x1
//2^1,0010
#define FLAG_TRANSPARENT 0x2
//2^2,0100
#define FLAG_RESIZABLE 0x4
//0110
  int window_flag = FLAG_RESIZABLE | FLAG_TRANSPARENT;
//0100
  int resizable = window_flag & FLAG_RESIZABLE;
//0000
  int visible = window_flag & FLAG_VISIBLE;

//移位运算 左移<< 右移>> 二进制移位(可用计算器验证)

int x = 1000;
//x*2
x << 1;
//x/2
x >> 1;
//下面这些和python一样,注意位运算符
x *= 2;
x <<= 1;
x /= 2;
x >>= 1;
x += 2;
x -= 2;
x %= 2;
//逗号也是运算符，取的是后面的值（x = x + 3)
x = x*2, x = x + 3;

  return 0;
}