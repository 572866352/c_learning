//
// Created by 57286 on 2022/11/21.
//
#include <stdio.h>
#include "../include/printlnf.h"
int main(void) {
  char string[11] = "hello world";
  for (int i = 0; i < 11; ++i) {
    PRINTLNF_CHAR(string[i]);
  }
//  c�������ַ��������ַ����������ַ���������null��\0����β
//  ������ʵ����������Խ���ˣ��������һλһֱ�����
  PRINTLNF_STRING(string);
//  ����һλ��null����
  char string1[12] = "hello world";
  PRINTLNF_STRING(string1);
//  ���Բ�д�ַ�����С�����Զ�����
  char string2[] = "hello world";
  PRINTLNF_STRING(string2);
//  ���ģ�msvc��gbk���룬mingw��utf-8����
  char string_ch[] = "��ã��й�";
  PRINTLNF_STRING(string_ch);
//  �����ÿ��ַ���������,���洢����Unicode���
  wchar_t ws[] = L"��ã��й�";
  PRINTLNF_INT(ws);
  return 0;
}