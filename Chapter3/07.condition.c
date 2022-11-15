#include <stdio.h>
//其实只是一个宏，把0定义为false，1定义为true
#include <stdbool.h>

int main(void) {
//  bool true = 1 false =0
//_Bool bool定义bool类型
  _Bool is_enable = true;
  bool is_visible = false;
  printf("is_enable:%d\n", is_enable);
  printf("is_visible:%d\n", is_visible);

  /*if语句语法
   * if(<condition>){
   * ...statement
   * } else{
   * ...statement
   * }
   *
   *if(<condition>){
   * ...statement
   * } else if(<condition2>){
   * ...statement} else{
   * ...statement
   * }
   * */
#define MAGIC_NUMBER 10
  int user_input;
  printf("Please input a number:\n");
  scanf("%d", &user_input);
  if (user_input > MAGIC_NUMBER) {
    printf("your number is bigger");
  } else if (user_input < MAGIC_NUMBER) {
    printf("your number is smaller");
  } else {
    printf("you are right\n");
  }
//  三元表达式 ?问表达式，真为1，否则为0
  int is_open = is_visible && is_enable ? 1 : 0;
  printf("is_open:%d\n", is_open);

  /*
   * switch(<cond>){
   * case 0:{
   * ...}
   * break; 可以没有
   * case 1:{
   * ...}
   * break;
   * default:{
   * ...}
   * }
   * */

#define ADD '+'
#define SUB '-'
#define MULTIPLY '*'
#define DIVIDE '/'
#define REM '%'
  int left;
  int right;
  char operator;
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
  return 0;
}