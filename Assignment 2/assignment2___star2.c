#include<stdio.h>
void Display(int iNo)
{
    int i=0;
i=1;
while( iNo >=i )
{
printf(" * ");
i++;
}
}
int main()
{
int iValue = 0;
printf("Enter number=");
scanf("%d",&iValue);
Display(iValue);
return 0;
}