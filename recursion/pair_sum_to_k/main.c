#include <stdio.h>
#include <stdlib.h>
int get_max(int *arr,int n)
{
 int i=0,max=arr[0];
 while(i<n)
 {
   if(arr[i]>max)
   max=arr[i];
   i++;
 }
 return max;
}
void get_pair(int *elements,int n,int key,int *result)
{
int i=1;
  while(i<=n)
  {
    if(elements[key-i]==1)
    {
      result[0]=i;
      result[1]=key-i;
      return result;
      i++;

    }
  }
  return ;
}
int main()
{
int result[2]={0},*elements,n,i=0,temp,key,*arr;
  elements=(int *)calloc(1000,sizeof(int));
  scanf("%d",&n);
  arr=(int*)malloc(n*sizeof(int));
  while(i<n)
  {
    scanf("%d",&temp);
    elements[temp]=1;
    i++;
    arr[i]=temp;
  }
  printf("Enter key:");
  scanf("%d",&key);
  n=get_max(arr,n);
get_pair(elements,n,key,result);
printf("%d %d",result[0],result[1]);
return 0;

}
