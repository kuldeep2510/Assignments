#include<stdio.h>
void Pattern(int iRow, int iCol)
{
char ch='A';
char ph='a';
int i=0;
int j=0;


for(i=1;i<=iCol;i++)
{
    for(j=1;j<=iRow;j++)
    {
        if(i%2==0)
        {
            printf("%c\t",ph);
            ph++;
        }
        else
        {
            printf("%c\t",ch);
            ch++;
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