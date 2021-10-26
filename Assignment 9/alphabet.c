#include<stdio.h>
void Pattern(int iNo)
{
     char ch;
for(ch=65;ch<=(iNo+64);ch++)
{
printf("%c",ch);
}

}
int main()
{
int iValue = 0;
printf("Enter number of elements");
scanf("%d",&iValue);
Pattern(iValue);
return 0;
}