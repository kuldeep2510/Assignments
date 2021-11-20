import java.lang.*;
import java.util.Scanner;;


class CheckNoPresent
{
      public static void main(String Arg[])
      {
            int iValue=0,iNo=0,i=0;
            int arr[];
            boolean bRet=false;
             Scanner sobj=new Scanner(System.in);
            System.out.println("How many numbers:");
            iValue=sobj.nextInt();
              arr= new int[iValue];
             System.out.println("Enter Elements:");
             for(i=0;i<arr.length;i++)
             {
                   arr[i]=sobj.nextInt();
             }
             System.out.println("Enter number:");
             iNo=sobj.nextInt();

             Check cobj= new Check();

             bRet= cobj.Number(arr,iNo);

             if(bRet==true)
             {
                   System.out.println("Number is present");
             }
             else
             {
                  System.out.println("Number is not present"); 
             }
      }
}

class Check
{
      public boolean Number(int [] brr,int iValue)
      {
            int i=0,iCnt=0;
           for(i=0;i<brr.length;i++)
           {
                 if((brr[i])%iValue==0)
                 {
                       iCnt++;
                       break;
                 }
           }
           if(iCnt==1)
           {
           return true;
           }
           else 
           {
                 return false;
           }
      }
}