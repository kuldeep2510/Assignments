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
int Addition(PNODE Head,int no)
{
   int iSum=0;
   PNODE temp=Head;
   while (temp!=NULL)
   {  
     iSum=iSum+temp->Data;

     temp=temp->Next;
     
   }
   
   
   return iSum;
}

 int main()
 {
    PNODE First = NULL;
	int iNo=0,iRet=0;
   
   InsertFirst(&First,10);
   InsertFirst(&First,20);
   InsertFirst(&First,30);
   InsertFirst(&First,40);
   InsertFirst(&First,50);
    Display(First);
   
   
 
    
iRet=Addition(First,iNo);
 printf("Addition of LL\n%d",iRet);

 return 0;
}