#include <stdio.h>
#include <stdlib.h>
int digit_sum(int num)
{
  if(num==0)
  return 0;
  return num%10+digit_sum(num/10);
}
int main()
{
    int num;
    scanf("%d",&num);
    printf("sum of digits is:%d",digit_sum(num));
    return 0;
}
