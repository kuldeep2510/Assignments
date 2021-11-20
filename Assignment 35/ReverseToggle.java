import java.lang.*;
import java.util.Scanner;

class ReverseToggle
{
      public static void main(String Arg[])
      {
            String str1,str2;
            int Stop=0;
            Scanner sobj= new Scanner(System.in);
            System.out.println("enter the string");
            str1=sobj.nextLine();

          

           StringDemo sd=new StringDemo();

            sd.StrNCatX(str1);

      }

}







class StringDemo
{
public void StrNCatX(String src)
{
   int i=0;


char ch;

   
 
   for(i=(src.length()-1);i>=0;i--)
   {
         ch=src.charAt(i);
         if(ch>='a'  &&ch<='z')
         {
            ch=(char)((int)ch-32);
         }
         else if(ch>='A'&& ch<='Z')
         {
               ch=(char)((int)ch+32);
         }
     System.out.print(ch);
   }
   
   
   

}
}