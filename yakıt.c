#include <stdio.h>

int main() {
 float litre,yol,depo;
    printf("Kullanılan litre'yi girin (bitirmek için -1):");
    scanf("%f",&litre);
    printf("Gidilen kilometreyi girin:");
    scanf("%f",&yol);
    depo=(litre/yol)*100;
    printf("Bu depo için Lt/100km: %f\n",depo);

  while(litre=-1){
    printf("Kullanılan litre'yi girin (bitirmek için -1):\n");
    scanf("%f",&litre);
    printf("Gidilen kilometreyi girin:\n");
    scanf("%f",&yol);
    depo=(litre/yol)*100;
    printf("Bu depo için Lt/100km: %f\n",depo);
  }

return 0;

}
