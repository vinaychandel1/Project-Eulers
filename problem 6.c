#include <stdio.h>

int main()
{
   unsigned i,sum1=0,sum2=0;
   for(i=1;i<=100;i++){
    sum1+=i*i;
    sum2+=i;
   }
   
   printf("%d",sum2*sum2-sum1);
    
}