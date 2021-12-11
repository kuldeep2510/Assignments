import java.util.Scanner;

class CopyArray
{
      public static void main(String args[])
      {
            Scanner obj=new Scanner(System.in);

            System.out.println("Enter size of array:");
            int size=obj.nextInt();

            int Arr[]=new int[size];

            for(int i=0;i<Arr.length;i++)
            {
                  Arr[i]=obj.nextInt();
            }

           Convert cobj=new Convert();
           int Crr[]=cobj.Array(Arr);

           for(int j=0;j<Crr.length;j++)
           {
                 System.out.print(Crr[j]+" ");
           }
      }
}

class Convert
{
      public int[] Array(int Brr[])
      {
            int Crr[]=new int[Brr.length];
            for(int i=0;i<Brr.length;i++)
            {
               Crr[i]=Brr[i];

            }


            return Crr;
      }
}