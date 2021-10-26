#include<stdio.h>

void DisplaySchedule(char chDiv)
{
   switch(chDiv)
   {
  case 'A':case 'a':
   
       printf("Your exam at 7 AM");
   break;
   case 'B':case 'b':
   
       printf("Your exam at 8:30 AM");
   break;
  case 'C':case 'c':
       printf("Your exam at 9:30 AM");
    break;
  case 'D':case 'd':
    printf("Your exam at 10:30 AM");
       break;
   default:
   
       printf("Invalid Division");
   
   }
  
}
int main()
{
char cValue = '\0';

printf("Enter your devision\n");
scanf("%c",&cValue);
DisplaySchedule(cValue);
return 0;
}