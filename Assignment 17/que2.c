#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[], int iLength)
{
int iCnt=0,iEven=0,iOdd=0,iCan=0;

    

  for(iCnt=0;iCnt<iLength;iCnt++)
  {
      if((Arr[iCnt])%2==0)
      {
          
           iEven++;
         
      }
      else
      {
          iOdd++;
      }
      
  }
  iCan=iEven-iOdd;

  return iCan;
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
iRet = Frequency(p, iSize);
printf("%d",iRet);
free(p);
return 0;
}