#include <stdio.h>
/*
 * �ַ���ASCII խ�ַ�
 * %c���ַ���ʽ��
 * \����ϰ˽�������ʾ�ַ�
 * \x����ʮ��������Ҳ���Ա�ʾ�ַ�
 * \n:newline
 * \b:backspace
 * \r:return
 * \t:table
 * \':'�ַ�������
 * \":"�ַ���������
 * ���ַ�(wchar_t) unicode  ���պ��� ���ַ�ǰ����L windows��Ҫ��utf-8ת��gdk
 * �����MingGw����utf-8
 * C���԰�1�ֽڶ���Ϊchar����ռ�õ�λ����bit��
 * �õ����ű��������ĵ����ַ���Ϊ�ַ�����
 * */
int main(void){
  char a = 'a';
  char char_1 = '1';
  char i = '\46';
  wchar_t zhong = L'��';
//  ��C������һ����ĸ��Ӧ����ֵ���Դ洢��8λ�Ĵ洢��Ԫ�У���˿��԰�4��������8λASCII��洢��һ��32λ�ĵ�Ԫ��
//������������ַ���������char���ͱ���grade��ֻ�����8λ��Ч
  char grade = 'fate';
  printf("grade: %c\n",grade);
  printf("char a: %c\n",a);
  printf("char_1: %c\n",char_1);
  printf("char i: %c\n",i);
  printf("zhong: %d", zhong);
  return 0;
}