#include <stdio.h>
#include <stdlib.h>

int main()
{
  char *str;
  str=(char*)malloc(50*sizeof(char));
  scanf("%[^\n]%*c,str);
  printf("%s",str);
    //rev_print(n);
    return 0;
}
