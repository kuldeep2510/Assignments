import java.lang.*;
import java.util.Scanner;


class Between3n7
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
       
        int iDigit=0,iCnt=0;

        
        while(iNo!=0)
        {
        iDigit=iNo%10;
         if(iDigit>3 && iDigit<7)
         {
               iCnt++;
         }
          iNo=iNo/10;
       
      }

        return iCnt;
  }


}