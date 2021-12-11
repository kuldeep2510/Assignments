import java.lang.*;
import java.util.Scanner;

class SumArray
{
      public static void main(String args[])
      {
       
           int iRet=0;
            Scanner obj=new Scanner(System.in);
            System.out.println("enter number of elements for Array 1:");
            int size1=obj.nextInt();
            int []Arr1=new int[size1];
            System.out.println("Enter elements:");

            for(int i=0;i<size1;i++)
            {
              Arr1[i]=obj.nextInt();
            }

            System.out.println("enter number of elements for Array 2:");
            int size2=obj.nextInt();
            int []Arr2=new int[size2]; 
            System.out.println("Enter elements:");

            for(int j=0;j<size2;j++)
            {
              Arr2[j]=obj.nextInt();
            }
            Unknown uobj=new Unknown();
            iRet=uobj.Sum(Arr1,Arr2);

            System.out.println("difference between summation of arrays:"+iRet);
           
      }


   
}
class Unknown
{
   public int Sum(int Brr1[],int Brr2[])
   {
      int iSum1=0,iSum2=0;
      for(int i=0;i<Brr1.length;i++)
      {
            iSum1=iSum1+Brr1[i];
      }  


      for(int j=0;j<Brr2.length;j++)
      {
            iSum2=iSum2+Brr2[j];
      }

     return iSum1-iSum2;
   }
}   