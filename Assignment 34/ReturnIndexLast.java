import java.lang.*;
import java.util.Scanner;;


class ReturnIndexLast
{
      public static void main(String Arg[])
      {
            int iValue=0,iNo=0,i=0;
            int arr[];
            int iRet=0;
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

             iRet= cobj.Number(arr,iNo);

            System.out.println(iRet);

             
      }
}

class Check
{
      public int Number(int [] brr,int iValue)
      {
            int i=0,iCnt=0;
           
           for(i=(brr.length-1);i>=0;i--)
           {
                 if((brr[i])%iValue==0)
                 {
                       iCnt++;
                      break;
                 }
                 
           }
           if(i<0)
           {
                 return -1;
           }
           else
           {
            return i;
           }
          
      }
}