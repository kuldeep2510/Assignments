#include<stdio.h>
double SquareMeter(int iValue)
{
float Sqmtr=0.0;
Sqmtr =iValue*0.0929;

 return Sqmtr;
}
int main()
{
int iValue = 0;
double dRet = 0.0;
printf("Enter area in square feet");
scanf("%d",&iValue);
dRet = SquareMeter(iValue);
printf("Area in square Meter:%lf\n",dRet);
return 0;
}