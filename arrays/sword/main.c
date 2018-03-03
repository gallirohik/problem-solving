#include <stdio.h>
#include <stdlib.h>
int who_alive(int n,int k)
{
  unsigned int mask=0x01,i=1,alived;
  mask=mask<<7;
  n=n<<k;
  while((n&mask)==0)
  {
  mask=mask>>1;
  i++;
  if(i==7)break;
  }
  n=n&(mask-1);
  alived=n|1;
  printf("%d",alived);

  return 0;
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    who_alive(n,k);
    return 0;
}
