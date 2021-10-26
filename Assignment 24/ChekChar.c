#include<stdio.h>
#include<stdbool.h>


bool ChkChar(char *str, char ch)
{
  int i=0,iCnt=0;
for(i=0;str[i]!='\0';i++)
{
    if(str[i]==ch)
    {
        iCnt++;
        break;
        
    }

}
if(iCnt==1)
{
  return true;
}
else
{
    return false;
}

}

int main()
{
char arr[20];
char cValue;
bool bRet = false;

printf("Enter string\n");
//scanf("%[^'\n']s",arr);
gets(arr);
printf("Enter the character\n");
scanf("%c",&cValue);

bRet = ChkChar(arr, cValue);

if(bRet == true)
{
printf("Character found");
}
else
{
printf("Character not found");
}

return 0;
}