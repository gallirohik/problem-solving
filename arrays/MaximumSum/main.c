#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[50],i,n,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
      if(arr[i]>0)
      sum+=arr[i];
    }
    printf("sum is:%d",sum);
    return 0;
}
