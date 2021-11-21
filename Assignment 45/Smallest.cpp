#include<iostream>
using namespace std;


struct node
{
int Data;
node *Next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


void InsertFirst(PPNODE Head , int no )
{
PNODE newn = NULL;
newn = (PNODE)malloc(sizeof(NODE));
newn->Next = NULL;
newn->Data = no;
if (*Head == NULL)
{
*Head = newn;
}
else
{
newn -> Next = *Head;
*Head = newn;
}
}

void Display(PNODE Head)
{
    PNODE temp=Head;
      while (temp!=NULL)
      {
         cout<<"|"<<temp->Data<<"|->";

          temp=temp->Next;
      }
     
      
}



void Smallest(PNODE Head)
{

 PNODE temp=Head;

 while (temp!=NULL)
 {
       int iDigit=0,iNo=0,iSmall=9;
      iNo=temp->Data;

       while (iNo!=0)
  {
         iDigit=iNo%10;
        
        
        if (iDigit<iSmall )
        {
             iSmall=iDigit;
        }
      
       
         
         
         iNo=iNo/10;

  }
   
    

   
       cout<<"\n"<<iSmall<<"\t";

  temp=temp->Next;
 }
      




}




int main()
{
PNODE First = NULL;

InsertFirst(&First, 101);
InsertFirst(&First, 51);
InsertFirst(&First, 852);
InsertFirst(&First, 11);

Display(First);

Smallest(First);

return 0;
}