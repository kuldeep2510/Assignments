#include<stdio.h>
void strlwrx(char *str)
{
    int i=0;
    for(i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
          str[i]=str[i]+32;
         
        }
    }
    
 printf("Modified string is %s",str);

}

int main()
{
char arr[20];

printf("Enter string\n");
scanf("%[^'\n']s",arr);

strlwrx(arr);


return 0;
}