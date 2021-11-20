import java.lang.*;
import java.util.Scanner;


class Pattern
{

   public static void main(String Arg[])
   {
         int iValue1=0;
         int iValue2=0;
        
        Scanner sobj= new Scanner(System.in);

         System.out.println("Enter the number of rows:");
         iValue1=sobj.nextInt();

         System.out.println("Enter number of Coloumbs:");
         iValue2=sobj.nextInt();

         Marvellous mobj=new Marvellous();
         mobj.Display(iValue1,iValue2);

   }
}


class Marvellous
{

      public void Display(int iNo1,int iNo2)
      {
          int i=0,j=0;
          char ch='A';

          for(i=1;i<=iNo1;i++)
          {
              for(j=1;j<=iNo2;j++)
              {
                System.out.print(ch+"\t");
                ch++;
              }
              ch='A';
              System.out.println();
          }
      }


}