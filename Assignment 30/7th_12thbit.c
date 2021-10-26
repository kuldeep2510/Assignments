#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool CountOn(int iNo)
{
   int iNm1=0,iNm2=0;
   UINT iMask1=0x00000100;
   UINT iMask2=0x00000800;

    
   iNm1=iNo&iMask1; 
   iNm2=iNo&iMask2;
     
     if((iNm1==iMask1) && (iNm2==0x00000000))

   {
     return true;
   }
   else{
     return false;
   }
    
}

int main()
{
  int iValue=0;
  bool bRet=false;


  printf("Enter number:\n");
  scanf("%d",&iValue);

  
  bRet=CountOn(iValue);
  if(bRet==true)
  {
  printf("9th or 12th bit is on or off");
  }
  else
  {
    printf("wrong bit");
  }
  return 0;
}