#include<stdio.h>
int MultFact(int iNo)
{
int iFact=1;
int i=1;
for(i=1;i<iNo;i++)
if(iNo%i==0)
{
    iFact=iFact*i ;
}
return iFact;
}
int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number");
scanf("%d",&iValue);
iRet = MultFact(iValue);
printf("%d",iRet);
return 0;
}