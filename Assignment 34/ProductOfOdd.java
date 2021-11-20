import java.lang.*;
import java.util.Scanner;


class ProductOfOdd
{

      public static void main(String Arg[])
      {
        int iValue=0,iRet=0,i=0;
        int arr[];
        Scanner sobj=new Scanner(System.in);
        System.out.println("how many numbers");
        iValue=sobj.nextInt();
        
        arr= new int [iValue];
       System.out.println("Enter numbers");
       for(i=0;i<arr.length;i++)
       {
             arr[i]=sobj.nextInt();

       } 

        Odd eobj= new Odd();
        iRet=eobj.Oddnum(arr);
    
      
       System.out.println(iRet);

      }
}

class Odd
{
  public int Oddnum(int []brr) 
  {
        int i=0,iOdd=1,iCnt=0;

        for(i=0;i<brr.length;i++)
        {
              if(brr[i]%2!=0)
              {
                    iOdd=iOdd*brr[i];
                    iCnt++;

              }
              if(iCnt==0)
              {
                    iOdd=0;
              }
        }
    

        return iOdd;
  }


}