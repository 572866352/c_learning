
//在stdio.h中的函数原型  通过标准库实现 头文件是为了方便
int __cdecl puts(char const* _Buffer);
int __cdecl printf(const char * __restrict__ _Format,...);
int main(void) {
  puts("hello world");
  printf("good!!!");
  return 0;
}
