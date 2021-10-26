#include<stdio.h>
#include<stdbool.h>



typedef unsigned int UINT;
bool ChkBit(UINT iNo)
{
  UINT iMask=0x000001C0;
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
        printf("7,15,21,28 bits are on");

    }
    else
    {
        printf("7,15,21,28 bits  are not on");
    }


    return 0;
}