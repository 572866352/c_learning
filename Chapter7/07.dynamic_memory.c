//
// Created by 57286 on 2022/11/26.
//

#include "include/printlnf.h"
#include <stdio.h>
#include <stdlib.h>

#define PLAYER_COUNT 10

//因为即使用动态内存，变量还是会被销毁（调用时无法找到分配好的内存地址），因此用指针的指针
void INITPOINTER(int **ptr,int lenth,int default_value) {
//  给指针指向的指针赋值 **ptr(&players即players的地址，它的类型是一个指针的指针)——>*players——>malloc
  *ptr = malloc(sizeof(int) * lenth);
  for (int i = 0; i < lenth; ++i) {
    (*ptr)[i] = default_value;
  }

}

int main(void) {
//  动态内存分配 malloc(类型大小 * 个数) 存放在堆区，因此不会被释放
//  int *players = malloc(sizeof(int) * PLAYER_COUNT);
  int *players;
//  同意可以使用calloc分配动态内存，calloc会使用后销毁内存
  int *players2 = calloc(PLAYER_COUNT,sizeof(int));
  PRINTLNF_INT_ARRAY(players2,PLAYER_COUNT);
//  realloc重新分配动态内存，从原来的地址分配
  players2 = realloc(players2,PLAYER_COUNT*2* sizeof(int));
  PRINTLNF_INT_ARRAY(players2,PLAYER_COUNT*2);
  INITPOINTER(&players,PLAYER_COUNT,0);
  for (int i = 0; i < PLAYER_COUNT; ++i) {
    PRINTLNF_INT(players[i]);
    players[i] = i;
  }
  PRINTLNF_INT_ARRAY(players,PLAYER_COUNT);
//释放内存
  free(players);
  return 0;
}