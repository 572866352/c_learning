//
// Created by 57286 on 2022/11/27.
//

#include <stdio.h>
#include "include/printlnf.h"
#include <stdlib.h>
#include <time.h>

#define PLAYERSCOUNT 10
void SWAPINT(int *x,int *y){
  int temp = *x;
  *x = *y;
  *y = temp;
}

void SHUFFLE(int *array,int lenth) {
  srand(time(NULL));
  for (int i = lenth-1; i >0; --i) {
    int random_num= rand() % i;
    SWAPINT(array+i,array+random_num);
  }
}

int *PARTITION(int *low,int *high) {
  int pivot = *(low+(high-low)/2);
  int *p =low;
  int *q = high;
  while (1) {
    while (*p<pivot) p++;
    while (*q>pivot) q--;

    if (p>=q) break;
    SWAPINT(p++,q--);
  }
  return q;
}

void QUICKSORT(int *low,int *high) {
  if(low>=high) return;
  int *partition = PARTITION(low,high);
  QUICKSORT(low,partition);
  QUICKSORT(partition+1,high);
}

int main() {
  int *players = malloc(sizeof(int)*PLAYERSCOUNT);
  if(!players) {

  }
  for (int i = 0; i < PLAYERSCOUNT; ++i) {
    players[i] = i;
  }
  SHUFFLE(players,PLAYERSCOUNT);
  PRINTLNF_INT_ARRAY(players,PLAYERSCOUNT);
  QUICKSORT(players,players+PLAYERSCOUNT-1);
  PRINTLNF_INT_ARRAY(players,PLAYERSCOUNT);
  free(players);
  return 0;
}
