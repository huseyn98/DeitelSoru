#include <stdio.h>


int main(){

  int sayi,a,b,c,d;

  printf("4 basamaklı bir sayı giriniz:");
  scanf("%d",&sayi);
  d=(sayi%10);
  c=(sayi%100)/10;
  b=(sayi%1000)/100;
  a=(sayi/1000);
  c=(a*10)-7;
  d=(b*10)-7;
  a=(c*10)-7;
  b=(d*10)-7;
  printf("%d%d%d%d\n",a,b,c,d);


  return 0;
}
