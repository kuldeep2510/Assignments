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



void Largest(PNODE Head)
{

 PNODE temp=Head;

 while (temp!=NULL)
 {
       int iDigit=0,iNo=0,iLarge=0;
      iNo=temp->Data;

       while (iNo!=0)
  {
         iDigit=iNo%10;
        
        
        if (iDigit>iLarge )
        {
             iLarge=iDigit;
        }
      
       
         
         
         iNo=iNo/10;

  }
   
    

   
       cout<<"\n"<<iLarge<<"\t";

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

Largest(First);

return 0;
}