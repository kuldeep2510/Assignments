#include<stdio.h>
#include<stdlib.h>



int Check(int Arr[], int iLength)
{
int iCnt=0,iBnt=Arr[iCnt];
 for(iCnt=0;iCnt<iLength;iCnt++)
 {
    if(Arr[iCnt]<iBnt)
    {
        iBnt=Arr[iCnt];
    }
 }
 return iBnt;
}
int main()
{
int iSize = 0,iRet = 0,iCnt = 0;
int *p = NULL;
int bRet =0;
printf("Enter number of elements");

scanf("%d",&iSize);
p = (int *)malloc(iSize * sizeof(int));
if(p == NULL)
{
printf("Unable to allocate memory");
return -1;
}
{
printf("Enter elements \n",iSize);
for(iCnt = 0;iCnt<iSize; iCnt++)

scanf("%d",&p[iCnt]);
}
bRet = Check(p, iSize);

printf("Largest number is\n%d",bRet);
free(p);
return 0;
}