#include<stdio.h>
int Divide(int iNo1,int iNo2)
{
int iAns = 0;
if(iNo2/iNo1)
{
return -1;
}
else
iAns=iNo1/iNo2;
{
return iAns;
}
}
int main()
{
int iValue1 =0,iValue2 =0;
int iRet = 0;

printf("ENTER FIRST VALUE=");
scanf("%d",&iValue1);
printf("ENTER SECOND VALUE=");
scanf("%d",&iValue2);

iRet = Divide(iValue1,iValue2);
printf("Division is %d",iRet);
return 0;
}