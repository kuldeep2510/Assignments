#include<stdio.h>
#include<stdlib.h>

#include<stdio.h>
int Frequency(int Arr[], int iLength, int iNo)
{
    int i=0,j=0;
  for(i=0;i<iLength;i++)
    {
      if(Arr[i]==iNo)
      {
         j++;
         break;
      }
    }
    return i;
}

int main()
{
    int iSize=0,iRet=0,iCnt=0,iValue=0;

    int*p=NULL;

    printf("Enter number of elements");
scanf("%d",&iSize);
printf("Enter the number\n");
scanf("%d",&iValue);
p = (int *)malloc(iSize * sizeof(int));
if(p == NULL)
{
printf("Unable to allocate memory");
return -1;
}
{
printf("Enter %d elements \n",iSize);
for(iCnt = 0;iCnt<iSize; iCnt++)

scanf("%d",&p[iCnt]);
}
iRet = Frequency(p, iSize,iValue);
printf("%d",iRet);
free(p);
return 0;



}