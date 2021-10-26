#include<stdio.h>
double CircleArea(float fRadius)
{
const float PI=3.141;
double Area=PI*fRadius*fRadius;
return Area;
}
int main()
{
float fValue = 0.0;
double dRet = 0.0;
printf("Enter radius\n");
scanf("%f",&fValue);
dRet = CircleArea(fValue);
printf("Area of circle is:%f",dRet);
return 0;
}