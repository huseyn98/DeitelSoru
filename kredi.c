#include <stdio.h>

int main(){
  float balans,bas_balans,harcama,yatirim,limit;
  int hesap_num;
      printf("Hesap numarasını girin (bitirmek için -1): " );
      scanf("%d",&hesap_num);
  while (hesap_num != (-1)) {
    printf("Başalangıç balansı giriniz: ");
    scanf("%f",&bas_balans);
    printf("Toplam harcamayı girin: ");
    scanf("%f",&harcama);
    printf("Toplam yatırlan parayı girin: ");
    scanf("%f",&yatirim);
    printf("Kredi limitini girin: ");
    scanf("%f",&limit);
    balans = 0;

    balans = (bas_balans+harcama-yatirim);
 if(balans>limit){
  printf("Hesap:\t%d\n",hesap_num);
  printf("Kredi Limiti:%f\n",limit);
  printf("Balans:\t%f\n",balans);
  printf("Kredi limiti aşımı.\n");
  printf("Hesap numarasını girin (bitirmek için -1): " );
  scanf("%d",&hesap_num);
  }


 }

return 0;

}
