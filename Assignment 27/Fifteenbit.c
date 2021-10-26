#include<stdio.h>
#include<stdbool.h>



typedef unsigned int UINT;
bool ChkBit(UINT iNo)
{
  UINT iMask=0x00004000;
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
    UINT iValue =0;
    bool bRet=false;

    printf("Ente number:\n");
    scanf("%d",&iValue);

    bRet=ChkBit(iValue);

    if(bRet==true)
    {
        printf("15th bit is on");

    }
    else
    {
        printf("15th bit is off");
    }


    return 0;
}