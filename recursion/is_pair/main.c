#include <stdio.h>
#include <stdlib.h>
int len(char *str)
{
int c=0;
  while(*str++!='\0')
  c++;
  return c;
}
int count_pair(char *str,int n)
{

  if(n<2)
  return 0;
  if(*str==*(str+2))
   return 1+count_pair(str+1,--n);
   else
   return 0+count_pair(str+1,--n);
}
int main()
{
    char *str;
    int n;
    str=(char*)malloc(50*sizeof(char));
    scanf("%s",str);
    printf("%d",count_pair(str,len(str)));
    return 0;
}
