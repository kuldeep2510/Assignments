import java.lang.*;
import java.util.Scanner;

import javax.lang.model.util.ElementScanner14;

class FirstN
{
      public static void main(String Arg[])
      {
            String str1,str2;
         boolean bRet=false;
         int stop=0;
            Scanner sobj= new Scanner(System.in);
            System.out.println("enter the 1st string");
            str1=sobj.nextLine();

            System.out.println("enter 2nd string");
            str2=sobj.nextLine();

            System.out.println("Enter number");
            stop=sobj.nextInt();


           StringDemo sd=new StringDemo();

            bRet=sd.StrNCatX(str1,str2,stop);

            if (bRet==true)
            {
                  System.out.println("True");
            }
            else
            {
                  System.out.println("False");
            }

      }

}







class StringDemo
{
public boolean StrNCatX(String src, String dest,int iNo)
{
   int i=0,j=0;

  boolean flag=true;
   char ch,ph;

   
   
   for(i=0;i<iNo;i++)
   {
      ch=src.charAt(i);
     
      ph=dest.charAt(i);

      if(ch!=ph)
      {
            flag=false;
         break;
      }
       

      
   }
   
   
   return flag;

}
}