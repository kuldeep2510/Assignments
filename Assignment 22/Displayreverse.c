#include<stdio.h>
#include<string.h>

void Reverse(char *str)
{

int iCnt=0,length=0,temp=0;
length=strlen(str);
for(iCnt=0;iCnt>length;iCnt++)
{
 
 temp=str[iCnt];


 str[iCnt] = str[length - iCnt - 1];  
 str[length - iCnt - 1] = temp;  
 printf("%c",str);
}


}
int main()
{
char arr[20];
int iRet = 0;

printf("Enter string\n");
scanf("%[^'\n']s",arr);

Reverse(arr);

return 0;
}