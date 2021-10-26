#include<stdio.h>

void Display(char ch)
{
    int i=0,j=0;
   if(ch>='A' && ch<='Z')
   {
       for(i=ch;i<='Z';i++)
       {
           printf("%c\t",i);
       }
   }
   if(ch>='a'  && ch<='z')
   {
       for(j=ch;j>='a';j--)
       {
           printf("%c\t",j);
       }
   }
}
int main()
{
char cValue = '\0';
printf("Enter the character\n");
scanf("%c",&cValue);
Display(cValue);
return 0;
}