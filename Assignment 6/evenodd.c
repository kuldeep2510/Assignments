#include<stdio.h>
int CountDiff(int iNo)
{
 int iDigit =0;
 int iEve=0;
 int iOdd=0;
 int iDiff=0;
 while (iNo>0)
 {
    iDigit=iNo%10;
    if(iDigit%2==0)
    {
        iEve=iEve+iDigit;
    }
    else
    {
        iOdd=iOdd+iDigit;
    }
    iNo=iNo/10;
 }
 iDiff=iEve-iOdd;

 return iDiff;
}
int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number");
scanf("%d",&iValue);
iRet = CountDiff(iValue);
printf("%d",iRet);
return 0;
}