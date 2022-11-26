//
// Created by 57286 on 2022/11/21.
//

#include "../include/printlnf.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PLAYERS_COUNT 50

//简单交换两个数组元素的数据
void SWAPELEMENTS(int array[],int first,int second) {
  int temp = array[first];
  array[first] = second;
  array[second] = temp;
}

//生成随机数，将数组的第i个元素与第（随机数）个元素交换 实现乱序
void SHUFFLEARRAY(int array[],int lenth) {
  srand(time(NULL));
//  [0,rand_max]
  for (int i = lenth; i > 0; --i) {
    int random_num = rand() % i;
    SWAPELEMENTS(array,i,random_num);
  }
}

int main(void) {
  int players[PLAYERS_COUNT];
  for (int i = 0; i < PLAYERS_COUNT; ++i) {
    players[i] = i;
  }
  PRINTLNF_INT_ARRAY(players,50);
  SHUFFLEARRAY(players,50);
  PRINTLNF_INT_ARRAY(players,50);
  return 0;
}