#include <stdio.h>
#include <stdlib.h>
int is_armstrong(int n)
{
   int temp,x,sum=0;
   temp=n;
   while(temp!=0)
   {
    x=temp%10;
    sum=sum+x*x*x;
    temp/=10;
   }
   if(sum==n)
   return 1;
   return 0;
}
int main()
{ int n;
  scanf("%d",&n);
  printf("%d",is_armstrong(n));
    return 0;
}
