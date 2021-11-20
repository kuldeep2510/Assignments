import java.lang.*;
import java.util.Scanner;


class EvenOddSum
{

      public static void main(String Arg[])
      {
        int iValue=0,iRet=0;
      
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter number numbers");
        iValue=sobj.nextInt();
       

        Fuction eobj= new Fuction();
       
         iRet= eobj.Fun(iValue);
      
       
        System.out.println(iRet);
      }
}

class Fuction
{
  public int Fun(int iNo) 
  {
       
        int iDigit=0,iEven=0,iOdd=0;


             
            while (iNo!=0)
            {
              iDigit=iNo%10;
                 if(iDigit%2==0)
                 {
                   iEven=iEven+iDigit;
                 }
                 else
                 {
                   iOdd=iOdd+iDigit;
                 }
                
                iNo=iNo/10; 
              
            
            }
             
          
        
      
       
        return iEven-iOdd;
  }


}