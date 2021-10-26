#include<stdio.h>

void DisplayASCII()
{
int iCnt=0;
char ch;
 printf("Decimal\t Hexadecimal\t Octal\n");
for(iCnt=0;iCnt<=225;iCnt++)
{
   printf("%d\t      %x\t        %o\n",iCnt,iCnt,iCnt);
}
}
int main()
{
    
DisplayASCII();
return 0;
}