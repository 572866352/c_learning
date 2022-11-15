#include <stdio.h>
int main(void){
  char a_asII = 67;
  printf("%c\n",a_asII);
  printf("\astartled by the sudden sound, sally shouted,\n\"By the great pumpkin, what is that!\"");
  float b;
  printf("enter a floation-point value:");
  scanf("%f",&b);
  printf("fixed-point notation:%f\n",b);
  printf("exponential notation:%e\n",b);
  printf("p-notation:%a\n",b);
  printf("please enter your age:");
  float d;
  scanf("%f",&d);
  printf("the s is:%e",d*365.0f*3.156e7f);
  return 0;
}