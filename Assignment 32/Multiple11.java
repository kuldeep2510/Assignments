import java.lang.*;
import java.util.Scanner;


class Multiple11
{

      public static void main(String Arg[])
      {
        int iValue=0,i=0;
        int arr[];
        Scanner sobj=new Scanner(System.in);
        System.out.println("how many numbers");
        iValue=sobj.nextInt();
        
        arr= new int [iValue];
       System.out.println("Enter numbers");
       for(i=0;i<arr.length;i++)
       {
             arr[i]=sobj.nextInt();

       } 

        Fuction eobj= new Fuction();
       
          eobj.Fun(arr);
      
       

      }
}

class Fuction 
{
  public void Fun(int []brr) 
  {
        int i=0;

        for(i=0;i<brr.length;i++)
        {
              if(brr[i]%11==0)
              {
                   System.out.println("Multiple of 11:"+brr[i]);

              }
             
        }
    

        
  }


}