#include<stdio.h>
#include<stdbool.h>

bool ChkCase(char ch)
{

    
  if(ch>='a' && ch<='z')
  {
    return true;
  }
  else
  {
     return false;
  }
 

}
int main()
{
char cValue = '\0';
bool bRet = false;
printf("Enter the character\n");
scanf("%c",&cValue);
bRet = ChkCase(cValue);
if(bRet == true)
{
printf("It is Smallcase");
}
else
{
printf("It is not a smallcase");
}
return 0;
}