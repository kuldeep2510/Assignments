#include<stdio.h>
typedef unsigned int UINT;
UINT Bitoff(UINT iNo)
{ UINT iNM=0;
  int iMask=0x00000240;
  if((iNo&iMask)==iMask)
  {
      iNM=iNo^iMask;
  }
  else
  {
      iNM=iNo;
  }
  return iNM;
}
int main()
{

  UINT iValue=0;
 UINT iRet=0;

 printf("Enter number:\n");
 scanf("%d",&iValue);

  iRet =Bitoff(iValue);

  printf("modified number\n%d",iRet);

    return 0;
}