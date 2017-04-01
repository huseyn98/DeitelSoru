#include <stdio.h>

int main() {
  float satis;
  double maas;
   printf("Satışları giriniz (Bitirmek için -1): ");
   scanf("%f",&satis);

   while(satis!=(-1)){
     maas=200+((satis*9)/100);
     printf("Maaş:\t%f\n",maas);
     printf("Satışları giriniz (Bitirmek için -1):");
     scanf("%f",&satis);
   }
  return 0;
}
