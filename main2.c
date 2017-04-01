#include<stdio.h>

int main(){
   int fail;
   int grade;
   int pass;
   unsigned int counter;

   pass=0;
   fail=0;
   counter=0;

  while(counter<=10){
    printf("Enter result (1 or 2) :");
    scanf("%d",&grade);
    if (grade==1){
      pass=pass+1;
    }
    else{
      fail=fail+1;
    }
    counter=counter+1;
  }

  printf("%d passed student number\n",pass);
  printf("%d failed studend number\n",fail);


  if (pass==8){
    printf("Bonus to introductions\n");
  }

return 0;

}
