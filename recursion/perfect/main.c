#include <stdio.h>
#include <stdlib.h>
int is_perfect(int n)
{
   int i=1,sum=0;

   while(i<=n/2)
   {
    if(n%i==0)
    sum=sum+i;
    i++;
   }
   if(sum==n)
   return 1;
   return 0;
}
int main()
{ int n;
  scanf("%d",&n);
  printf("%d",is_perfect(n));
    return 0;
}
