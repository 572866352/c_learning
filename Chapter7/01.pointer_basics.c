#include <stdio.h>
#include "include/printlnf.h"

int main() {
  int a;
  scanf("%d",&a);
//  a�ĵ�ַ�����;���һ��ָ��,ָ�����һ����ͨ����������ǵ�ַ
  int *p = &a;
  PRINTLNF_HEX(p);
  PRINTLNF_INT(sizeof(int *));
//  *��ȡ��ָ��ָ���ֵ��&��ȡ��ַ
  PRINTLNF_INT(*p);
  int **pp = &p;

  return 0;
}
