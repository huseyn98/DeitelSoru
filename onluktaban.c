#include <stdio.h>

int main (){
  int e,d,c,b,a,sayi,ikilik;

  printf("En fazla 5 basmaklı bir ikili tabanlı sayı giriniz:");
  scanf("%d",&sayi);
  e=(sayi%10);
  d=(sayi%100)/10;
  c=(sayi%1000)/100;
  b=(sayi%10000)/1000;
  a=sayi/10000;
  ikilik=((e*1)+(d*2)+(c*2*2)+(b*2*2*2)+(a*2*2*2*2));
  printf("%d\n",ikilik);
  return 0;
}
