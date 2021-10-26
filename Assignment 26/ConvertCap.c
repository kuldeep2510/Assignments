#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{

   while (*src!='\0')
   {
      if(*src>='a' && *src<='z')
      {
         *dest=*src-32;
         dest++;
         src++;
        
      }
      else
      {
          *dest=*src;
          dest++;
         src++;
      }
   }
   
}


int main()
{
char arr[30] = "Marvellous Python 2";
char brr[30]; // Empty string

StrCpyCap(arr,brr);

printf("%s",brr); // MARVELLOUS PYTHON 2

return 0;
}