 #include<stdio.h>
 #include<stdlib.h>
 
 

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
void Perfect(PNODE Head)
{

   
   int i=0,kemp=0,iSum=0;
   PNODE temp=Head;
   
   while (temp!=NULL)
   {
      for (int i = 1;i<(temp->Data); i++)
      {
         if( (temp->Data) % i==0)
         {
           iSum=iSum+i;
         }
      }
      
     
      
      if (iSum==(temp->Data))
      {
         printf("%d\n",temp->Data);
      }
      temp=temp->Next;
      iSum=0;
   }
     
     
}

 int main()
 {
    PNODE First = NULL;
	int iNo=0,iRet=0;
   
   InsertFirst(&First,11);
   InsertFirst(&First,28);
   InsertFirst(&First,17);
   InsertFirst(&First,41);
   InsertFirst(&First,6);
    Display(First);
  
   
 
    
Perfect(First);
 

 return 0;
}