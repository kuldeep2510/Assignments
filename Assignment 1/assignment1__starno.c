#include<stdio.h>
void Accept(int iCn)
{
int iNo = 0;
for(iNo=1;iNo<=iCn;iNo++)
{
printf(" * ");
}

}
int main()
{
int iValue = 0;
printf("enter no of times * prints=");
scanf("%d",&iValue);
Accept(iValue);
return 0;
}