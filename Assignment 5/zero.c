#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{
int iDigital=0;
while (iNo>0)
{
 iDigital=iNo%10;
 if(iDigital==0)
 {
   return true;
 }
 iNo=iNo/10;
}

}
int main()
{
int iValue = 0;
bool bRet = false;
printf("Enter number");
scanf("%d",&iValue);
bRet = ChkZero(iValue);
if(bRet == true)
{
printf("It Contains Zero");
}
else
{
printf("There is no Zero");
}
return 0;
}