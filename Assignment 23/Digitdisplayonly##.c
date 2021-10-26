#include<stdio.h>

void DisplayDigit(char *str)
{

int i=0,s=0,num=0;
for(i=0;str[i];i++)
{
    if(str[i]>='0' && str[i]<='9')
    {
      s=str[i]-'0';
       
      num = num*10 + s; 
     
    }
}
      printf("%d",num);
}

int main()
{
char arr[20];

printf("Enter string\n");
scanf("%[^'\n']s",arr);

DisplayDigit(arr);

return 0;
}