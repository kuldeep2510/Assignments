import java.lang.*;
import java.util.Scanner;


class EvenOdd
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

        OddEven eobj= new OddEven();
        iRet=eobj.Even(arr);
    
      
       System.out.println(iRet);

      }
}

class OddEven
{
  public int Even(int []brr) 
  {
        int i=0,iEven=0,iOdd=0;

        for(i=0;i<brr.length;i++)
        {
              if(brr[i]%2==0)
              {
                    iEven=iEven+brr[i];

              }
              else
              {
                 iOdd=iOdd+brr[i];
              }
        }
    

        return iEven-iOdd;
  }


}