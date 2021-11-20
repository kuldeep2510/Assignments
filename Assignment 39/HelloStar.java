import java.lang.*;
import java.util.Scanner;


class HelloStar
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

           
        


          for(i=0;i<=mtr.length()-2;i++)
          {
            
              for(j=0;j<mtr.length();j++)
              {
                 if(i>=j)
                 {
                  ch=mtr.charAt(j);
                 
                System.out.print(ch+" ");
                 }
                 else
                 {
                    System.out.print("* ");
                 }
                
               
              }
             
              System.out.println();
              
          }
      }


}