#include<stdio.h>
int RangeSum(int iStart , int iEnd)
{
 int iCnt=0,iSum=0;
 
for(iCnt=iStart;iCnt<=iEnd;iCnt++)
  {
      iSum=iSum+iCnt;
      
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

if(iValue1>iValue2)
    {
        printf("invalid range");

        return 0;
    }


if(iValue1<0 || iValue2<0 )
{
     printf("invalid range");
}
else{
iRet = RangeSum(iValue1, iValue2);
printf("Addition is %d",iRet);}
return 0;
}