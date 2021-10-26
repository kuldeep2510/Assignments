#include<stdio.h>
#include<stdlib.h>



void Range(int Arr[], int iLength)
{
int iCnt=0,iNo=0,iDigit=0;
for(iCnt=0;iCnt<iLength;iCnt++)
{
while(Arr[iCnt]!=0)
{
    iNo=Arr[iCnt];
    iDigit=iNo%10;
    iNo=iNo/10;
    iDigit++;


}
    if(iDigit==3)
{
    printf("%d\t",Arr[iCnt]);
}
}}


 
 

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
Range(p, iSize);


free(p);
return 0;
}