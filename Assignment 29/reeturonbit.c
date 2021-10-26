#include<stdio.h>
#include<stdbool.h>


typedef unsigned int UINT;
int Chekbit(int iNo,int iPos)
{
   
   UINT iMask=0x00000001;
    int iNm=0;
    if((iPos<1)||(iPos>32))
   {
       return -1;
   }
    iMask=iMask<<(iPos-1);
    iNm=iNo|iMask;
    
        return iNm;
    
} 
int main()
{
  UINT iValue=0;
  UINT iValue2=0;
  int iRet=0;

  printf("Enter number\n");
  scanf("%d",&iValue);

  printf("Enter position\n");
  scanf("%d",&iValue2);

iRet= Chekbit(iValue,iValue2);

printf("Modified number is:\n%d",iRet);

    return 0;
}