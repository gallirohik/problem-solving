#include <stdio.h>
#include <stdlib.h>

void reverse(int *arr,int start,int end)
{
int temp,i,j;
for(i=start,j=end;i<j;i++,j--)
{
   temp=arr[i];
   arr[i]=arr[j];
   arr[j]=temp;
}
}
rotate_right_by_d(int *arr,int n,int d)
{
  d=d%n;
  reverse(arr,0,d-1);
  reverse(arr,d,n-1);
  reverse(arr,0,n-1);
}
int main()
{
    int *arr,i,d,n;
    arr=(int*)malloc(100*sizeof(int));
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);
    }
    printf("Enter no of rotations:");
    scanf("%d",&d);
    rotate_right_by_d(arr,n,d);
    for(i=0;i<n;i++)
    printf(" %d",arr[i]);
    return 0;
}
