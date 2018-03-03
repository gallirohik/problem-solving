#include <stdio.h>
#include <stdlib.h>
void r_r_string(char *str)
{
  if(*(str)=='\0')
  return ;
  r_r_string(str+1);
  printf("%c",*str);
}
int main()
{
    char *str;
    str=(char*)malloc(50*sizeof(char));
    scanf("%[^\n]%*c",str);
     r_r_string(str);
    return 0;
}
