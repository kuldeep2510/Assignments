#include<stdio.h>
#include<string.h>
 char *StrCpyX(char *src, char *dest)
{
// Fileter
while(*src != '\0')
{
*dest = *src;
src++;
dest++;
}
return dest;
}

int main()
{
    int i=0;
    char *cRet=NULL;
char arr[30] = "Marvellous Multi OS";
char brr[30]; // Empty string

cRet=StrCpyX(arr,brr);

for(i=0;i<=31;i++)
{
printf("%c",cRet[i]); // Marvellous Multi OS
}
return 0;
}