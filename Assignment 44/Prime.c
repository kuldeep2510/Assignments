 #include<stdio.h>
 #include<stdlib.h>
 #include<stdbool.h>
 

struct node
{
   int Data;
   struct node *Next;
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
      printf("%d->",temp->Data);
      temp=temp->Next;
   }
   printf("\n");
}
void Prime(PNODE Head)
{

   
   int i=0,kemp=0;
   PNODE temp=Head;
   bool flag=true;
   printf("prime number from LL are:\n");
   while (temp!=NULL)
   {
      for (int i = 2;i<((temp->Data)/2); i++)
      {
        if ((temp->Data)%i==0)
        {
           flag=false;
           break;
        }
        
      }
      if (flag==true)
      {
        printf("%d\t",temp->Data);
      }
      
     temp=temp->Next;
     flag=true;
   }
   
     
     
     
}

 int main()
 {
    PNODE First = NULL;
	int iNo=0,iRet=0;
   
   InsertFirst(&First,11);
   InsertFirst(&First,20);
    InsertFirst(&First,17);
   InsertFirst(&First,22);
   InsertFirst(&First,41);
   InsertFirst(&First,89);
    Display(First);
  
   
 
    
Prime(First);
 

 return 0;
}