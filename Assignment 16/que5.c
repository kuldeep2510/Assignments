#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[], int iLength)
{
    int iCnt=0;
    
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
       if(Arr[iCnt]%11==0 )
       {
           printf(" Number multiple of 11 is:%d\n",Arr[iCnt]);
       }
   }
}
int main()
{
int iSize = 0,iRet = 0,iCnt = 0;
int *p = NULL;
printf("Enter number of elements");
scanf("%d",&iSize);
p = (int *)malloc(iSize * sizeof(int));
if(p == NULL)
{
printf("Unable to allocate memory");
return -1;
}
{
printf("Enter  elements\n ",iSize);
for(iCnt = 0;iCnt<iSize; iCnt++)

scanf("%d",&p[iCnt]);
}
Display(p, iSize);
free(p);
return 0;
}