#include<stdio.h>
#include<string.h>
int ChkChar(char *str, char ch)
{
  int i=0,iCnt=0;
for(i=(strlen(str)-1);i>=0;i--)
{
    if(str[i]==ch)
    {
    
        iCnt==1;

       break;
    }

}
return i;

}

int main()
{
char arr[20];
char cValue;
int iRet = 0;

printf("Enter string\n");
//scanf("%[^'\n']s",arr);
gets(arr);
printf("Enter the character\n");
scanf("%c",&cValue);

iRet = ChkChar(arr, cValue);

printf("first Occarance Index\n%d",iRet);
}