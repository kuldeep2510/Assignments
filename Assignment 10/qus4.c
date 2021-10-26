#include<stdio.h>
void Pattern(int iRow, int iCol)
{
int iCnt1=0;
    int iCnt2=0;
    
    
  for(iCnt1=1;iCnt1<=iRow;iCnt1++)
    {
        for(iCnt2=1;iCnt2<=iCol;iCnt2++)
    {
         if(iCnt2%2==0)
        {
            printf("#\t");

        }
        else
        {
            printf("*\t");
        }
        
    }
        printf("\t");
       
    }
}
int main()
{
int iValue1 = 0, iValue2 = 0;
printf("Enter number of rows and columns");
scanf("%d %d",&iValue1, &iValue2);
Pattern(iValue1, iValue2);
return 0;
}