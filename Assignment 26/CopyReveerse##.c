#include<stdio.h>

void StrCpyRev(char *src, char *end)
{
char temp;

*end=*src;

 
   while(*src!='\0')
{
  
    src++;
  
}
src--;
while (*src!=*end)
{
  temp=*src;
  src--;
  *end=temp;
  end++;
}
}





int main()
{
char arr[30] = "Marvellous Python";
char brr[30]; // Empty string

StrCpyRev(arr,brr);

printf("%s",brr); // nohtyP suollevraM

return 0;
}