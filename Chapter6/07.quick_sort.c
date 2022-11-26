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
  array[first] = array[second];
  array[second] = temp;
}

//生成随机数，将数组的第i个元素与第（随机数）个元素交换 实现乱序
void SHUFFLEARRAY(int array[],int lenth) {
  srand(time(NULL));
//  [0,rand_max]
  for (int i = lenth-1; i > 0; --i) {
    int random_num = rand() % i;
    SWAPELEMENTS(array,i,random_num);
  }
}

int PARTITION(int array[],int low,int high) {
  int pivot = array[high];
  int partition = low;
  for (int i = low; i < high; ++i) {
    if(array[i] < pivot) {
      SWAPELEMENTS(array,i,partition++);
    }
  }
  SWAPELEMENTS(array,partition,high);
  return partition;
}

void QUICKSORT(int array[],int low,int high) {
  if(low >= high) return;
  int partition = PARTITION(array,low,high);
  QUICKSORT(array,low,partition-1);
  QUICKSORT(array,partition+1,high);

}

int main(void) {
  int players[PLAYERS_COUNT];
  for (int i = 0; i < 50; ++i) {
    players[i] = i;
  }
  PRINTLNF_INT_ARRAY(players,PLAYERS_COUNT);
  SHUFFLEARRAY(players,PLAYERS_COUNT);
  PRINTLNF_INT_ARRAY(players,PLAYERS_COUNT);
  QUICKSORT(players,0,PLAYERS_COUNT-1);
  PRINTLNF_INT_ARRAY(players,PLAYERS_COUNT);
  return 0;
}