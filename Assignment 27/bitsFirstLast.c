#include<stdio.h>
#include<stdbool.h>



typedef unsigned int UINT;
bool ChkBit(UINT iNo)
{
  UINT iMask=0x80000001;
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
        printf("First and last bits are on");

    }
    else
    {
        printf("First and Last bits  are not on");
    }


    return 0;
}