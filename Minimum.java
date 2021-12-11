import java.lang.*;
import java.util.Scanner;

class Minimum
{
      public static void main(String args[])
      {
            Scanner obj=new Scanner(System.in);
            System.out.println("Enter the number of elements to add:");
            int size=obj.nextInt();
            int Arr[]=new int[size];
            System.out.println("Enter the elements:");
            for(int i=0;i<size;i++)
            {
                  Arr[i]=obj.nextInt();
            }
            
            System.out.println("Enter the number of elements to add:");
            int size2=obj.nextInt();
            int Arr2[]=new int[size2];
            System.out.println("Enter the elements:");
            for(int j=0;j<size2;j++)
            {
                  Arr2[j]=obj.nextInt();
            }

            CheakMin cobj=new CheakMin();
            cobj.MinArray(Arr,Arr2);
      }
}

class CheakMin
{
      public void MinArray(int Brr[],int Brr2[])
      {
            int min=999999,min2=999999;
            for(int i=0;i<Brr.length;i++)
            {
                   if(Brr[i]<min)
                   {
                        min=Brr[i];
                   }
                   
            }
            System.out.println("Minimum elemnt of Array1:"+min);


            for(int j=0;j<Brr2.length;j++)
            {
                  if(Brr2[j]<min2)
                  {
                        min2=Brr2[j];
                  }
            }

            System.out.println("Minimum elemnt of Array2:"+min2);
      }
}