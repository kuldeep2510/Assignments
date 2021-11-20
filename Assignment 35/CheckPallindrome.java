import java.lang.*;
import java.util.Scanner;



class CheckPallindrome
{
      public static void main(String Arg[])
      {
            String str1,str2;
         boolean bRet=false;
            Scanner sobj= new Scanner(System.in);
            System.out.println("enter the 1st string");
            str1=sobj.nextLine();

           

           StringDemo sd=new StringDemo();

            bRet=sd.StrNCatX(str1);

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
public boolean StrNCatX(String src)
{
   int i=0,j=0;

  boolean flag=true;
   char ch,ph;

   
   
   for(i=0,j=(src.length()-1);i<src.length()&&j>0;i++,j--)
   {
      ch=src.charAt(i);
     
      ph=src.charAt(j);

      if(ch!=ph)
      {
            flag=false;
         break;
      }
      
      
   }
   
   
   return flag;

}
}