#include<stdio.h>
void Pattern(int iRow, int iCol)
{
int iCnt=0;
int i=0,j=0;

  for(i=1;i<=iRow;i++)
  {
      for(j=1;j<=iCol;j++)
      {
         if((i+j)==(iCol+1)||(i==1||j==1||i==iRow||j==iCol))
         {
           printf("*\t");

         }
         else if((i+j)<(iCol+1))
         {
           printf("#\t");
         }
         else
         {
           printf("$\t");
         }
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