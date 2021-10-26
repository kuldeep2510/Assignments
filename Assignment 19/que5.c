#include<stdio.h>
#include<stdlib.h>
void DigitsSum(int Arr[], int iLength)
{
  int i=0,j=0,iDigit=0,iNo=0,iSum=0;
  for(i=1;i<=iLength;i++)
  {
     iNo=Arr[i];

     for(j=1;iNo!=0;j++)
     {
           iDigit=iNo%10;
           iSum=iSum+iDigit;
           iNo=iNo/10;
     }

   printf("%d\n",iSum);
   iSum=0;
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

for(iCnt = 1;iCnt<=iSize; iCnt++)
{
printf("Enter element : ");
scanf("%d",&p[iCnt]);
}
DigitsSum(p, iSize);
free(p);
return 0;
}