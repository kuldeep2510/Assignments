#include<stdio.h>
#include<stdbool.h>


typedef unsigned int UINT;
bool Chekbit(int iNo,int iPos)
{
   
   UINT iMask=0x00000001;
    
    if((iPos<1)||(iPos>32))
   {
       return false;
   }
    iMask=iMask<<(iPos-1);
    if((iNo&iMask)==iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
  UINT iValue=0;
  UINT iValue2=0;
  bool bRet=false;

  printf("Enter number\n");
  scanf("%d",&iValue);

  printf("Enter position\n");
  scanf("%d",&iValue2);

bRet= Chekbit(iValue,iValue2);

if(bRet==true)
{
    printf("bit is on");
}
else
{
   printf("bit is off");
}
    return 0;
}