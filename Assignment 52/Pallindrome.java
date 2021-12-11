import java.util.Scanner;

class Pallindrome
{
      public static void main(String args[])
      {
            Scanner obj =new Scanner(System.in);
            System.out.println("Enter size of array:");
            int size=obj.nextInt();
            int Arr[]=new int[size];

            for(int i=0;i<Arr.length;i++)
            {
                  Arr[i]=obj.nextInt();
            }

           Conform cobj=new Conform();
           boolean bret=cobj.CheakPallindrome(Arr);


           if(bret==true)
           {
                 System.out.println("Array contains Pallindrome");
           }
           else
           {
                 System.out.println("Array does notcontain Pallindrome");
           }
      }
}

class Conform
{
      public boolean CheakPallindrome(int Brr[])
      {
            boolean flag=false;
            for(int i=0;i<Brr.length;i++)
            {
                  int iNo=Brr[i],iDigit=0,iSum=0;
                  
                  while (iNo!=0)
                  {
                        iDigit=iNo%10;
                        iSum=(iSum*10)+iDigit;
                        iNo=iNo/10;
                  }

                  if(iSum==Brr[i])
                  {
                        flag=true;
                        break;
                  }


            }

            return flag;
      }
}