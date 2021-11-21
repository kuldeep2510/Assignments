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
int SecMax(PNODE Head)
{

   
   int iMax=0,SMax=0;
   PNODE temp=Head;
  
   
   while (temp!=NULL)
   {
      
      if ((temp->Data)>iMax)
      {
         
         iMax=temp->Data;
        
      }
      else if(SMax<(temp->Data))
      {
         SMax=temp->Data;
      }
   
       temp=temp->Next;
   }


 return SMax;
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
   InsertFirst(&First,189);
    Display(First);
  
   
 
    
iRet=SecMax(First);

printf("Second max Data in LL\n%d",iRet);
 

 return 0;
}