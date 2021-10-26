#include<stdio.h>


int PrintEven(int iNo)
{
    int i=0;

    int n=0;
if(iNo <= 0)
{
iNo=-iNo;
}
i=1;
while (i<=iNo)
{
   if (i%2==0)
   {
        printf("%d\n",i);
   }
    i++;
}




}
int main()
{
int iValue = 0;
printf("Enter number\n");
scanf("%d",&iValue);
PrintEven(iValue);


return 0;
}