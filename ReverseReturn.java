import java.util.Scanner;

class ReverseReturn
{
      public static void main(String arg[])
      {
            Scanner obj =new Scanner(System.in);

            System.out.println("Enter size of array:");

            int size=obj.nextInt();

            int Arr[]=new int[size];

            System.out.println("enter the elment of array:");

            for(int i=0;i<size;i++)
            {
                  Arr[i]=obj.nextInt();
            }

            Demo dobj=new Demo();
           int Crr[]=dobj.MyArray(Arr);
          

           for(int j=0;j<Crr.length;j++)
           {
           System.out.print(Crr[j]+" ");
           
           }
          

      }
}

class Demo
{
      public int[] MyArray(int Brr[])
      {
          

            int Crr[]=new int[Brr.length];
            int i=0,j=0;
            for(i=(Brr.length-1),j=0;i>=0;i--,j++)
            {
                  
                  Crr[j]=Brr[i];
            }
        return Crr;
      }
}