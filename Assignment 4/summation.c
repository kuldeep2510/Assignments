#include<stdio.h>
int SumNonFact(int iNo)
{
    
   int iCnt=0,iSum=0;
   for(iCnt=1;iNo>iCnt;iCnt++)
   if(iNo%iCnt!=0)
   {
       iSum=iSum+iCnt;
   }
   return iSum;

}
int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number");
scanf("%d",&iValue);
iRet = SumNonFact(iValue);
printf("%d",iRet);
return 0;
}