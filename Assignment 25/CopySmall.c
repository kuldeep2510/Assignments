#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{

while(*src != '\0')
{
if((*src >= 'a') && (*src<='z'))
{
*dest = *src;
dest++;
}
src++;
}

}

int main()
{
char arr[30] = "Marvellous Multi OS";
char brr[30]; // Empty string

StrCpySmall(arr,brr);
printf("%s",brr); // MMOS

return 0;
}