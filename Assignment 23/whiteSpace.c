#include<stdio.h>
int Countwhite(char *str)
{
     int i=0,iCnt=0;
    for(i=0;str[i];i++)
    {
      if(str[i]==' ')
      {
        iCnt++;
      }
    }
    
 
return iCnt;
}

int main()
{

  int iRet=0;
char arr[20];

printf("Enter string\n");
scanf("%[^'\n']s",arr);

iRet=Countwhite(arr);
printf("Total whiteSpaces are:\n%d",iRet);

return 0;
}