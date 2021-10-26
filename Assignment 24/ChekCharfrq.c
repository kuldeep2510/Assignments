#include<stdio.h>

int ChkChar(char *str, char ch)
{
  int i=0,iCnt=0;
for(i=0;str[i]!='\0';i++)
{
    if(str[i]==ch)
    {
    
        iCnt++; 
       
    }

}
return iCnt;

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

printf("Freq of Characters are\n%d",iRet);
}