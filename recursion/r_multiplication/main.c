#include <stdio.h>
#include <stdlib.h>
r_multiply(int a,int b)
  {
    if(b==0)
    return 0;
    return a+r_multiply(a,b-1);
  }
int main()
{
  int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",r_multiply(a,b));
    return 0;
}
