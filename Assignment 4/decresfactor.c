#include<stdio.h>
void FactRev(int iNo)
{
    int i=0;
    i=iNo;
while (i>0)
{
    if(iNo%i==0)
    printf("%d\t",i);
    i--;
 
  
}

}
int main()
{
int iValue = 0;
printf("Enter number");
scanf("%d",&iValue);
FactRev(iValue);
return 0;
}