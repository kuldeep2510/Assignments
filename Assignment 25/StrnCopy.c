#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int StrCpy(str)
{
char str2[100];
 strcpy(str2,str);

 printf("copied string (str2)is  %s",str2);


}
int main()
{
    int *p=NULL;
   // p=(char*)malloc(sizeof(char)*50);
  char str1[100];

  printf("Enter String str1\n");
 scanf("%[^'\n']s",str1);
 
StrCpy(str1,p);

  return 0;
}