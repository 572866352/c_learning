#include <stdio.h>

int main(void) {
  /*
   * while(<condition>){
   * ...statement
   * }
   * */

  /*先做一次再循环
   * do{
   * }while(<condition>);
   * */
/*#define ADD '+'
#define SUB '-'
#define MULTIPLY '*'
#define DIVIDE '/'
#define REM '%'
  char command = 'y';
  int left;
  int right;
  char operator;
  do{
    printf("please input an expression:\n");
    scanf("%d %c %d", &left, &operator, &right);
    int result;
    switch (operator) {
      case ADD: {
        result = left + right;
      }
        break;
      case SUB: {
        result = left - right;
      }
        break;
      case MULTIPLY: {
        result = left * right;
      }
        break;
      case DIVIDE: {
        result = left / right;
      }
        break;
      case REM: {
        result = left % right;
      }
        break;
      default: {
        printf("unsupported operator:%c\n", operator);
        return 1;
      }
    }
    printf("result:%d\n", result);
    printf("again?type 'q' for quit\n");
//  等价于put("again?type 'q' for quit");
    getchar();
    command = getchar();
//等价于scanf("%d",&command);

  }while(command != 'q');
    return 0;*/

/*
 * for(<initialization>;<condition>;<state>){
 * ...statement
 * }
 * c99之前initialization不能有变量定义,即要在外面先定义num
 * */

  int sum = 0;
//while(num<100){
//  sum+=num;
//  num++;
//}
  for (int num = 1; num < 100; ++num) {
    sum += num;
  }
  printf("sum of [1,100]:%d\n", sum);

  int sumij = 0;
  for (int i = 0, j = 0; i < 100 && j < 100; ++i, ++j) {
    sumij += i * (i + j);
  }
  printf("sumij:%d\n", sumij);
//  continue跳过当前循环开始下一次，break直退出循环
  for (int i = 0; i < 10; ++i) {
    if (i == 2) { continue; }
    if (i == 8) { break; }
    printf("i:%d\n", i);
  }
//  goto最好不要用，因为容易搞乱
int i = 0;
  begin:
  printf("%d\n",i);
  if(i++<5){
    goto begin;
  }
  return 0;
}