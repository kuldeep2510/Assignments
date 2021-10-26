#include<stdio.h>
#include<stdbool.h>

bool CheakVowel(char *str)
{
int iCnt = 0;

// Fileter

while(*str != '\0')
{
  printf("%c\n",*str);
  if('a'==*str ||'e'==*str ||'i'==*str ||'o'==*str ||'u'==*str )
  {
      iCnt++;
  }
  
  str++;
}
if(iCnt>1)
{
return true;
}


}

int main()
{
char arr[20];
bool bRet = false;

printf("Enter string\n");
scanf("%[^'\n']s",arr);


bRet = CheakVowel(arr);
if(bRet == true)
{
printf("Contains Vowel");
}
else
{
printf("There is no Vowel");
}
return 0;
}