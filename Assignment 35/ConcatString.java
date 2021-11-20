import java.lang.*;
import java.util.Scanner;

class ConcatString
{
      public static void main(String Arg[])
      {
            String str1,str2;
            int Stop=0;
            Scanner sobj= new Scanner(System.in);
            System.out.println("enter the 1st string");
            str1=sobj.nextLine();

            System.out.println("enter 2nd string");
            str2=sobj.nextLine();

            System.out.println("Enter value of N");
            Stop=sobj.nextInt();

           StringDemo sd=new StringDemo();

            sd.StrNCatX(str1,str2,Stop);

      }

}







class StringDemo
{
public void StrNCatX(String src, String dest, int iCnt)
{
   int i=0;


   char ch;

   
   System.out.print(src+" ");
   for(i=0;i<iCnt;i++)
   {
         ch=dest.charAt(i);
         System.out.print(ch);
   }
   
   
   

}
}