import java.lang.*;
import java.util.Scanner;


class MultiplyAll
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
       
        int iDigit=0,iMul=1;


             
            while (iNo!=0)
            {
              iDigit=iNo%10;
              if(iDigit!=0)
              {
                iMul=iMul*iDigit;
                iNo=iNo/10; 
              }
              else
              {
                iNo=iNo/10; 
              }
            }
             
          
        
      
       
        return iMul;
  }


}