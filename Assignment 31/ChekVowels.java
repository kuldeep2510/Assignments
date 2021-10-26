import java.lang.*;

import java.util.Scanner;

class ChekVowels
{
  public static void main(String arg[])
  {
    int i=0;
    
    Scanner sc= new Scanner(System.in);
    System.out.println("Enter the String");
    String name=sc.nextLine();
    
    int temp;
    int iCnt=0,iMnt=0;
    boolean Flag=true;
    for(i=0;i<name.length();i++)
    {

      temp=name.charAt(i);
     
      if(temp=='a'||temp=='e'||temp=='i'||temp=='o'||temp=='u')
      {
      break;
       
      }
     
      
    }
    if(i==name.length())
    {
          Flag =false;
    }
  
   if (Flag==true)
   {
   System.out.print("True");
   }
   else
   {
    System.out.print("False");
   }
}}