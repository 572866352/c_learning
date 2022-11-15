//
// Created by 57286 on 2022/10/29
#include <stdio.h>
#include <limits.h>
/*
 * short int 不能小于16位(即两个字节)
 * short int < int < long int
 * sizeof()获取数据类型的长度，字节
 * %d表示格式化的输出符，d表示十进制(decimal)
 * \n是换行符
 * <limits.h>是得出数据类型整数范围
 * 2147483648 = 2^31,2147483647是因为有一个最高位用来当符号了
 * 一般用的时候不用写int,写short\long\long long就行了
 * 在数据类型前加unsigned表示无符号数
 * %u是unsigned int格式，4294967295=2^32-1长整形是%ld,此外还有%lld %lu %llu
 * short int是%hd,%s是字符串。16进制是%x(hex),八进制用%o(oct)
 * 如果要显示前缀0、0x和0X，前缀分别使用%#o、%#x、%#X。同理八进制和十六进制也是加#
 * 如果printf() 遗漏参数，会打印出内存中的任意值
 * 如果整数溢出会从0开始
 * * */

int main() {
  short int short_int = 0;
  int i = 0;
  long int long_int = 0;
  long long longlong_int = 0;
  unsigned int unsigned_int = 123;
  printf("short int:%d\n", sizeof(short int));
  printf("int:%d\n", sizeof(int));
  printf("long int:%d\n", sizeof(long int));
  printf("long long int:%d\n", sizeof(long long int));
  printf("max int %d, min int%d\n", INT_MAX, INT_MIN);
  printf("unsigned max int %u, unsigned min int %d\n", UINT_MAX, 0);
  return 0;
}