#include <stdio.h>

int main(){
  int gun;
  float oran,para,faiz;
  faiz=0;

  printf("Ana parayı girin (bitirmek için -1): ");
  scanf("%f",&para);

  while(para!=-1){
    printf("Faiz oranını girin: ");
    scanf("%f",&oran);
    printf("Kredi dönemini girin (gün): ");
    scanf("%d",&gun);
    faiz=(para*oran*gun)/365;
    printf("Faiz: %2f\n",faiz);
    printf("Ana parayı girin (bitirmek için -1): ");
    scanf("%f",&para);
  }
  return 0;
}
