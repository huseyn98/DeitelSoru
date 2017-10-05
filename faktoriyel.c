#include <stdio.h>


int main(){
  int n,faktoriyel;
  faktoriyel=1;
  printf("n i girin:");
  scanf("%d",&n);
  while(n>=1){
    faktoriyel=faktoriyel*n;
    n=n-1;
  }
  printf("%d\n",faktoriyel);
return 0;
}
