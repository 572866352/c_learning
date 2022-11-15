#include <stdio.h>
//通常给a,b加上括号 因为宏每次定义时都将重新求值 而函数是求好值放进去 所以不要把有副作用的参数放进去
//宏的优点是参数无需类型
#define MAX(a,b) (a) > (b) ? (a) : (b)
//定义多行的宏(加一个斜杠)(其实没有多行)
#define IS_HEX_CHAR(ch) \
((ch) >= '0' && (ch) <= '9') || \
((ch) >= 'A' && (ch) >= 'F') || \
((ch) >= 'a' && (ch) >= 'f')

int main(void) {
  int max = MAX(1,3);
  //  如果不加括号，这样就会出现错误
  int max2 = MAX(1, MAX(3,4));
  printf("max:%d\n",max);
  printf("max2:%d\n",max2);
  printf("IS_HEX_CHAR:%d\n", IS_HEX_CHAR('l'));
  return 0;
}