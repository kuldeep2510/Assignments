#include<stdio.h>
void Pattern(int iRow, int iCol)
{
int iCnt1=0;
    int iCnt2=0;
    
    for(iCnt2=iRow;iCnt2>=1;iCnt2--)
    {
    for(iCnt1=iCol;iCnt1>=1;iCnt1--)
    
     {  
        printf("%d\t",iCnt1);
       
    }
 
    
        printf("\n");
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