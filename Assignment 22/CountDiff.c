#include<stdio.h>

int CountDiff(char *str)
{
int iCnt =0,iBnt=0;

// Fileter

while(*str != '\0')
{
  printf("%c",*str);
  if(*str>='a' && *str<='z')
  {
      iCnt++;
  }
  if(*str>='A' && *str<='Z')
  {
    iBnt++;
  }
  
  str++;
}

return iCnt-iBnt;
}

int main()
{
char arr[20];
int iRet = 0;

printf("Enter string\n");
scanf("%[^'\n']s",arr);


iRet = CountDiff(arr);

printf("%d\t",iRet);

return 0;
}