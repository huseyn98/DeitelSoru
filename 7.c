#include <stdio.h>

int main(){

  int n;
  printf("n değerini giriniz = ");
  scanf("%d",&n);
  int x;
  printf("x değerini giriniz = ");
  scanf("%d",&x);

  float u,a,cosx;
  int k,i,j;
  u=1;
  a=1;
  k=1;
  cosx=1;
  for(i=2; i<n; i=i+2){
    for(j=1; j<i; j++){
      u=u*x;
      a=a*j;
    }
    cosx=cosx-k*(u/a);
    k=k*(-1);
  }
  printf("%f",cosx);


  return 0;
}
