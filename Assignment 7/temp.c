#include<stdio.h>
double FhtoCs(float fTemp)
{
    float fcel =0.0;
     fcel = (fTemp -32) * (0.5555);

     return fcel;
}
int main()
{
float fValue = 0.0;
double dRet = 0.0;
printf("Enter temperature in Fahrenheit:");
scanf("%f",&fValue);
dRet = FhtoCs(fValue);
printf("Temp in Celcius:%lf\n",dRet);
return 0;
}