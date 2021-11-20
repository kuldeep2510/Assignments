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
   
}
int Largest(PNODE Head,int no)
{
   int iLarge=0;
   PNODE temp=Head;
   while (temp!=NULL)
   {  
    if((temp->Data)>iLarge)
    {
       iLarge=temp->Data;
    }

     temp=temp->Next;
     
   }
   
   
   return iLarge;
}

 int main()
 {
    PNODE First = NULL;
	int iNo=0,iRet=0;
   
   InsertFirst(&First,10);
   InsertFirst(&First,20);
   InsertFirst(&First,300);
   InsertFirst(&First,40);
   InsertFirst(&First,50);
    Display(First);
   
   
 
    
iRet=Largest(First,iNo);
 printf("Largest of LL\n%d",iRet);

 return 0;
}