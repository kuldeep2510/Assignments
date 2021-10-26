#include<stdio.h>
#include<stdbool.h>
typedef int BOOL ;
# define TRUE 1
# define FALSE 0
BOOL ChkVowel ( char ch)
{
if(ch==97 || ch==101 || ch==105 || ch==111 || ch==117 || 
       ch==65 || ch==69  || ch==73  || ch==79  || ch==85)
{
return TRUE;
}
else
{
return FALSE;
}
}
int main()
{
char cValue = '\0';
BOOL bRet = FALSE;
printf("Enter character\n");
scanf("%c",&cValue);
bRet = ChkVowel (cValue );
if (bRet == TRUE)
{
printf("It is Vowel");
}
else
{
printf("It is not Vowel");
}
return 0;
}