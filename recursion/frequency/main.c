#include<stdio.h>
#include<stdlib.h>
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
int get_frequency()
{
int *elements,n,i,temp,*arr,x;
  elements=(int*)calloc(1000,sizeof(int));
  scanf("%d",&n);
  arr=(int*)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
  {
    scanf("%d",&temp);
    elements[temp]++;
    arr[i]=temp;
  }
x=get_max(arr,n);
printf("%d",get_max(elements,x));
return 0;

}
