#include<stdio.h>
typedef unsigned int UINT;
void CommonOn(int iNo1,int iNo2)
{
   
   UINT iMask=0x00000001;
    int iNm=0,iPos=0,iGm=0;
   
      iGm=iNo1&iNo2;

   for(iPos=1;iPos<=32;iPos++)
   { 
    iMask=0x00000001;
     iNm=0;
     iMask=iMask<<(iPos-1);
     
     iNm=iGm&iMask;
    
     
     if(iNm!=0)
     {
       
      printf("%d\t",iPos);
     }
     
   }
       
    
}

int main()
{
  int iValue1=0,iValue2=0;


  printf("Enter FIRST number:\n");
  scanf("%d",&iValue1);

printf("Enter Second number:\n");
  scanf("%d",&iValue2);

  
  CommonOn(iValue1,iValue2);

 
  return 0;
}