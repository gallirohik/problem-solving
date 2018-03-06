#include <stdio.h>
#include <stdlib.h>
char value(int val)
{
  if(val>=0&&val<=9)
   return val+'0';
   return val-10+'A';
}
void  convert_to(int n,int base,char *p)
      {
         if(n==0)
         return ;
        *p=(char)value(n%base);
         convert_to((int)n/base,base,p+1);
         printf("%c",*p);
        *p='\0';

      }
void r_r_string(char *str)
{
  if(*(str)=='\0')
  return ;
  r_r_string(str+1);
  printf("%c",*str);
}
int main()
{
  int n,base;
  char *result;
  result=(char*)malloc(50*sizeof(char));
  scanf("%d",&n);
  scanf("%d",&base);
  convert_to(n,base,result);
  printf("%s",result);
  r_r_string(result);

    return 0;
}
