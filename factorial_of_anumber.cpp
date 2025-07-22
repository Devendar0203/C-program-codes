//design the programe for factorial of a number//
#include <stdio.h>

int main() {
    int n,f=1,i=1;
    printf("Enter the number");
    scanf("%d",&n);
   /*while(n!=0)
   {
   	f=f*n;
   	n=n-1;
   }*/
   for(i=1;i<=n;i++)
   {
   	f=f*i;
   }
   
   
   
   
   
   printf("The factorial is %d",f);
   return 0;
}
