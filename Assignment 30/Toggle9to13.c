#include<stdio.h>

typedef unsigned int UINT;
UINT ToggleBitRange(UINT iNo,int iStart,int iEnd)
{
UINT iMask=0x00000001;
int i=0;

for(i=iStart;i<=iEnd;i++)
{
     UINT iMask=0x00000001;
      iMask=iMask<<(i-1);
      iNo=iNo^iMask;
    
}
return iNo;
}


int main()
{
  UINT iValue=0;
  int iPos1=0,iPos2=0,iRet=0;

   printf("Enter Number:\n");
   scanf("%d",&iValue);
printf("Enter position 1:\n");
   scanf("%d",&iPos1);
printf("Enter position 2:\n");
   scanf("%d",&iPos2);

   
 iRet=ToggleBitRange(iValue,iPos1,iPos2);

printf("After toggle rabger of bits number is\n%d",iRet);

      return 0;
}