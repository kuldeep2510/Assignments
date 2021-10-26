#include<stdio.h>
void NonFact(int iNo)
{int iCnt=0;

for(iCnt=1;iNo>iCnt;iCnt++)
if(iNo%iCnt!=0)
{
   printf("Not a factor:%d\n",iCnt);
}

}
int main()
{
int iValue = 0;
printf("Enter number");
scanf("%d",&iValue);
NonFact(iValue);
return 0;
}