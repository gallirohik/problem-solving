#include<stdio.h>
#include<stdlib.h>
int r_lsearch(int *arr,int len,int key)
{
  if(len<0)
    return -1;
  if(arr[len]==key)
    return len+1;
  return r_lsearch(arr,len-1,key);
}
int main()
{
   int *arr,n,i,key;
   scanf("%d",&n);
   arr=(int*)malloc(n*sizeof(int));
   for(i=0;i<n;i++)
     scanf("%d",&arr[i]);
     printf("Enter key value:");
     scanf("%d",&key);
  printf("%d",r_lsearch(arr,n,key));
}
