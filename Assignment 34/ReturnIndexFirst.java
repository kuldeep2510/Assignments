import java.lang.*;
import java.util.Scanner;;


class ReturnIndexFirst
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
            int i=0;
           
           for(i=0;i<brr.length;i++)
           {
                 if((brr[i])%iValue==0)
                 {
                       break;
                      
                 }
                 
           }
           if((brr.length)<(i+1))
           {
                 return -1;
           }
           else
           {
            return i;
           }
          
      }
}