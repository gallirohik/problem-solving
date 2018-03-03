#include <stdio.h>
#include <stdlib.h>
int partition(int *arr,int low,int high)
{
  int j,pivot,i,temp;
  pivot=arr[low];
  i=low+1;
  j=high-1;
  do{
     while(arr[i]<pivot)i++;
     while(arr[j]>pivot)j--;
     if(i<j)
     {
     temp=arr[i];
     arr[i]=arr[j];
     arr[j]=temp;
     }
  }while(i<=j);
  temp=arr[low];
  arr[low]=arr[j];
  arr[j]=temp;
  return j;
}
void qSort(int *arr,int low,int high)
{
  int j;
  if(low<high)
  {
  j=partition(arr,low,high);
  qSort(arr,low,j-1);
  qSort(arr,j+1,high);
  }
}
int main()
{
    int n,*arr,i;
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    qSort(arr,0,n-1);
    for(i=0;i<n;i++)
    {
    printf("%d",arr[i]);
    }

    return 0;
}
