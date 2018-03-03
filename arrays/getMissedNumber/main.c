#include <stdio.h>
#include <stdlib.h>
int lsearch(int *arr,int length)
{
  int i;
  for(i=0;i<length;i++)
  if(arr[i]==0)return i+1;
}

int main()
{
    int arr[50]={0},n,i,buffer;
    printf("Enter size of the array:");
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
    scanf("%d",&buffer);
    arr[buffer-1]=1;
    }
    printf("Missed Element is:%d",lsearch(arr,n));
    return 0;
}
