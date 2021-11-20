import java.lang.*;
import java.util.Scanner;;


class DisplayRange
{
      public static void main(String Arg[])
      {
            int iValue=0,iNo1=0,i=0,iNo2=0;
            int arr[];
           
             Scanner sobj=new Scanner(System.in);
            System.out.println("How many numbers:");
            iValue=sobj.nextInt();
              arr= new int[iValue];
             System.out.println("Enter Elements:");
             for(i=0;i<arr.length;i++)
             {
                   arr[i]=sobj.nextInt();
             }
             System.out.println("Enter 1st number:");
             iNo1=sobj.nextInt();
             System.out.println("Enter 2nd  number:");
             iNo2=sobj.nextInt();

             System.out.println();
             Check cobj= new Check();

             cobj.Number(arr,iNo1,iNo2);

           

             
      }
}

class Check
{
      public void Number(int [] brr,int iStart,int iEnd)
      {
            int i=0,iCnt=0;
           
           for(i=0;i<brr.length;i++)
           {
                 if(brr[i]>iStart && brr[i]<iEnd)
                 {
                       System.out.println(brr[i]);
                 }
                 
           }
          
          
      }
}