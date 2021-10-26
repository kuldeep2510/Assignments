import java.lang.*;

import java.util.Scanner;

class ReverseString
{
  public static void main(String arg[])
  {
    int i=0;
    
    Scanner sc= new Scanner(System.in);
    System.out.println("Enter the String");
    String name=sc.nextLine();
    
    char temp;
   
  

 for(i=name.length()-1;i>=0;i--)
 {
       temp=name.charAt(i);
       String str=String.valueOf(temp);


       System.out.print(str);
 }


  }
}