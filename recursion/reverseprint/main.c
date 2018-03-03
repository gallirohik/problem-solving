#include <stdio.h>
#include <stdlib.h>
void rev_print(int n)
{
  if (n==0) return ;
  printf("%d",n);
  rev_print(n-1);
}
int main()
{
  int n;
  scanf("%d",&n);
    rev_print(n);
    return 0;
}
