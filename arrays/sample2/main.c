#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr=(int *)malloc(20*sizeof(int)),count[3]={0},n,i,j;
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);
     count[arr[i]]++;
    }
     for(i=0;i<n;i++)
     {
        if(count[j]==0)
           count[j++];
           arr[i]=j;
           count[j]--;
     }
     for(i=0;i<n;i++)
     printf("%d",arr[i]);
    return 0;
}
