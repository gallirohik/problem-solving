#include <stdio.h>
#include <stdlib.h>
int r_length(char *str)
  {
    if(*str=='\0')
    return 0;
    return 1+r_length(str+1);
  }
int main()
{
    char *str;
    str=(char*)malloc(50*sizeof(char));
    scanf("%s",str);
    printf("%d",r_length(str));
    return 0;
}
