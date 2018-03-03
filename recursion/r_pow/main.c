#include <stdio.h>
#include <stdlib.h>
long int r_pow(int a,int b)
  {
    if(b==0)
    return 1;
    return a*r_pow(a,b-1);
  }
int main()
{
  int a,b;
    scanf("%d%d",&a,&b);
    printf("%ld",r_pow(a,b));
    return 0;
}
