import java.lang.*;
import java.util.Scanner;


class Hello
{

   public static void main(String Arg[])
   {
        String str;
        
        Scanner sobj= new Scanner(System.in);

         System.out.println("Enter the String:");
         str=sobj.nextLine();

         
         Marvellous mobj=new Marvellous();
         mobj.Display(str);

   }
}


class Marvellous
{

      public void Display(String mtr)
      {
          int i=0,j=0;
         
           char ch;

           
         


          for(i=1;i<=4;i++)
          {
            
              for(j=0;j<mtr.length();j++)
              {

                  ch=mtr.charAt(j);
                
                System.out.print(ch+"  ");
             
                
               
              }
             
              System.out.println();
              
          }
      }


}