#include<stdio.h>
int KMtoMeter(int iNo)
{
int Distance=0;
Distance=1000*iNo;

return Distance;
}
int main()
{
int iValue = 0, iRet = 0;
printf("Enter distance");
scanf("%d",&iValue);
iRet = KMtoMeter(iValue);
printf("Distance in km:%d\n",iRet);
return 0;
}