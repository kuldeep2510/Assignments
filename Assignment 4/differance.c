#include<stdio.h>
int FactDiff(int iNo)
{
    int TotalDiff=0;
int iSum=0;
int iDiff=0;
int iCnt=0;

for(iCnt=1;iNo>iCnt;iCnt++)

if(iNo%iCnt==0)
{
iSum=iSum+iCnt;
}
else
{
iDiff=iDiff+iCnt;
}
TotalDiff=iSum-iDiff;

return TotalDiff;
}
int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number");
scanf("%d",&iValue);
iRet = FactDiff(iValue);
printf("%d",iRet);
return 0;
}