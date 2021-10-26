#include<stdio.h>
int RangeSumEven(int iStart , int iEnd){
int iCnt=0,iSum=0;

for(iCnt=iStart;iCnt<=iEnd;iCnt++)
{
    if(iCnt%2==0)
    {
        iSum=iSum+iCnt;
    }
}
return iSum;
}
int main()
{
int iValue1 = 0, iValue2 = 0, iRet =0;
printf("Enter starting point");
scanf("%d",&iValue1);
printf("Enter ending point");
scanf("%d",&iValue2);
if(iValue1<0 || iValue2<0 )
{
     printf("invalid range");

     return 0;
}
if(iValue1>iValue2)
{
    printf("Invalid range");
    
}
else{

iRet = RangeSumEven(iValue1, iValue2);
printf("Addition is %d",iRet);
return 0;
}
}