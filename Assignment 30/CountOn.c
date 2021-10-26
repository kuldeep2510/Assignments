#include<stdio.h>
typedef unsigned int UINT;
int CountOn(int iNo)
{
   
   UINT iMask=0x00000001;
    int iNm=0,iPos=0,iCnt=0;
   
   for(iPos=1;iPos<=32;iPos++)
   { 
    iMask=0x00000001;
     iNm=0;
     iMask=iMask<<(iPos-1);
     
     iNm=iNo&iMask;

      if(iNm!=0)
     {
       iCnt++;
      
     }
     
     
   }
        return iCnt;
    
}

int main()
{
  int iValue=0,iRet=0;


  printf("Enter number:\n");
  scanf("%d",&iValue);

  
  iRet=CountOn(iValue);

  printf("Number of ON bits are\n%d",iRet);
  return 0;
}