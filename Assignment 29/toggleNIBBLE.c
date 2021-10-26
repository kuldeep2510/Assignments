#include<stdio.h>
#include<stdbool.h>


typedef unsigned int UINT;
int Chekbit(int iNo)
{
   
   UINT iMask=0x00000099;
   
    int iNm=0,iPm=0;
   
    
    iNm=iNo^iMask;
    
        return iNm;
    
} 
int main()
{
  UINT iValue=0;
  UINT iValue2=0;
  int iRet=0;

  printf("Enter number\n");
  scanf("%d",&iValue);

iRet= Chekbit(iValue);

printf("Modified number is:\n%d",iRet);

    return 0;
}