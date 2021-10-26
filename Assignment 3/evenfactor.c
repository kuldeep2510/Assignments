#include<stdio.h>
void DisplayFactor(char Cvalue)
{
 
if(Cvalue=='a'||Cvalue=='e'||Cvalue=='i'||Cvalue=='o'||Cvalue=='u'||Cvalue=='A'||Cvalue=='E'||Cvalue=='I'||Cvalue=='O'||Cvalue=='U')
  {
   printf("It is Vowel");
  }
  else
  {
      printf("its not a Vowel");
  }
  
  

}

int main()
{
char ch='\0';
printf("enter character=");
scanf("%c",&ch);

DisplayFactor(ch);
}