#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif
//..如果在C++环境下就有这一块的东西
//  （函数原型） 如果在C环境下就只有这一块函数原型，而C++环境下就包含上面的那一块
#ifdef __cplusplus
};
#endif


//用宏来做条件控制（宏可以在这个文件里定义也可以在cmake里定义）
void dump(char *message) {
#ifdef DEBUG
  puts(message);
#endif
}

int main(void) {
  dump("good!");
//  在mingw下才有__STDC_VERSION__这个宏，vs则没有 这个宏是告知C标准的版本号（cmake中是c23）
  printf("__STDC_VERSION__:%ld\n",__STDC_VERSION__);

#if __STDC_VERSION__ >= 202000
  puts("C23");
#elif __STDC_VERSION__ >= 201112
  puts("C11");
#else __STDC_VERSION__ >= 199901
  puts("maybe C99")
#endif

  return 0;
}
