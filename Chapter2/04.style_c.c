

#include <stdio.h>
/**
 * this program Calculate summary from 0 to 9
 * @param argc parameter count
 * @param argv parameters
 * @return 0
 * shift+f6重命名变量
 **/
int main(int argc, char **argv) {
  int sum = 0;
  int i = 0;
  while (i < 10) {
    sum = sum + i;
    i++;
  }
  printf("%d\n", sum);
  return 0;
}