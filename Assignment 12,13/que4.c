#include<stdio.h>
void Pattern(int iRow, int iCol)
{
int iCnt=0;
  int i=0,j=0;

  for(i=1;i<=iCol;i++)
  {
      for(j=1;j<=iRow;j++)
      {
          if(i==1||i==iCol||j==iRow||j==1)
         { 
             printf("*\t");
         }
         else
         {
             printf("@\t");
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