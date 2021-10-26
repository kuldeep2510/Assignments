import java.lang.*;

import java.util.Scanner;

class CountSmall
{
  public static void main(String arg[])
  {
    int i=0;
    
    Scanner sc= new Scanner(System.in);
    System.out.println("Enter the String");
    String name=sc.nextLine();
    
    int temp;
    int iCnt=0;
    
    for(i=0;i<name.length();i++)
    {

      temp=name.charAt(i);
     
      if(temp>='a' && temp<='z')
      {
      iCnt++;
       
      }
      
    }
     System.out.print(iCnt);
  }
}