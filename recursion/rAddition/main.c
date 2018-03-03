#include <stdio.h>
#include <stdlib.h>
int r_Addition(int a,int b)
{
    return a+b;
}
int main()
{   int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",r_Addition(a,b));
    return 0;
}
