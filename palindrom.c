#include <stdio.h>

int main (){
  int sayi,a,b,d,e;
  printf("Bir 5 basamaklı tam sayı giriniz:");
  scanf("%d",&sayi);
  e=(sayi%10);
  d=(sayi%100)/10;
  b=(sayi%10000)/1000;
  a=sayi/10000;
  if (a==e && b==d){
    printf("Girdiğiniz sayi palindromikdir\n");
  }
  return 0;
}
