#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
 char Temp;
  while (*src!='\0')
  {
    if(*src==' ')
    {
      src++;
    }
    else
    {Temp=*src;
    *dest=Temp;

    src++;
    dest++;}
  }
  
}

int main()
{
char arr[30] = "Marvel lous Pyth on";
char brr[30]; // Empty string

StrCpyX(arr,brr);

printf("%s",brr); // MarvellousPython

return 0;
}