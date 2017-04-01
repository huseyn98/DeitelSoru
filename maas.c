#include <stdio.h>

int main(){
  int saat;
  float maas,ucret;
  maas=0;

  printf("Çalışılan saati girini (bitirmel için -1): ");
  scanf("%d",&saat);

  while(saat!=-1){
    printf("Çalışanın saat üçretini girin: ");
    scanf("%f",&ucret);
    if(saat>40){
      maas=((saat-40)*(ucret*1.5)+(40*ucret));
    }
    else{
      maas=saat*ucret;
    }
    printf("Maaş: %f",maas);
    printf("Çalışılan saati girini (bitirmel için -1): \n");
    scanf("%d",&saat);
  }
  return 0;
}
