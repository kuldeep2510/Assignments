#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength, int iNo)
{int i=0,iCnt=0;

for(i=0;i<iLength;i++)
{
  if(Arr[i]==iNo)
  {
    iCnt++;
    break;
  }
}
if(iCnt==1)
{
  return true;

}
else{
  return false;
}

}
int main()
{
int iSize = 0,iRet = 0,iCnt = 0, iValue = 0;
int *p = NULL;
bool bRet = false;
printf("Enter number of elements");
scanf("%d",&iSize);

printf("Enter the number");
scanf("%d",&iValue);
p = (int *)malloc(iSize * sizeof(int));
if(p == NULL)
{
printf("Unable to allocate memory");
return -1;
}
{
printf("Enter %d elements ",iSize);
for(iCnt = 0;iCnt<iSize; iCnt++)


scanf("%d",&p[iCnt]);
}
bRet = Check(p, iSize,iValue);
if(bRet == true)
{
printf("Number is present");
}
else
{
printf("Number is not present");
}
free(p);
return 0;
}