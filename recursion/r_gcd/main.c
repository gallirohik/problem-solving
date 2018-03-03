#include <stdio.h>
#include <stdlib.h>
int r_gcd(int a,int b)
{
  if(a==0||b==0)
  return 0;
  if(b%a==0)
  return a;
  return r_gcd(b%a,a);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("gcd is:%d",r_gcd(a,b));
    return 0;
}
