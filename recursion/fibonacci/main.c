#include <stdio.h>
#include <stdlib.h>
int count=0;
int fibonacci(int n)
{
 if(n==0)
 return 0;
 if(n==1)
 return 1;
 count++;
 return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d fibonacci number if: %d",n,fibonacci(n));
    printf("No of recursive calls:%d",count);
    return 0;
}
