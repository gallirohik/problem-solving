#include <stdio.h>
#include <stdlib.h>
long int fact(int n)
{
  if(n==0)
  return 1;
  return n*fact(n-1);
}
int main()
{
   int n;
   scanf("%d",&n);
   printf("factorial is:%ld",fact(n));
    return 0;
}
