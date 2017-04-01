#include<stdio.h>

int main(void){

  unsigned int counter;
  int grade;
  int total;
  float ave;


  total=0;
  counter=0;
  printf("Please enter the grade:");
  scanf("%d",&grade);

  while(grade != -1){
   total=total+grade;
   counter=counter+1;
   printf("Please enter the grade:");
   scanf("%d",&grade);
  }

  ave=(float)total/counter;
  printf("%.2f is average is class\n",ave);
return 0;

}
