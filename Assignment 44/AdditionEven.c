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
int Addition(PNODE Head)
{

   
   int i=0,iSum=0;
   PNODE temp=Head;
  
   
   while (temp!=NULL)
   {
      
      
        if ((temp->Data)%2==0)
        {
          iSum=iSum+(temp->Data);
        }
        
      
      
      
     temp=temp->Next;
    
   }
   
     
     return iSum;
     
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
  
   
 
    
iRet=Addition(First);
 
printf("summation of LL\n%d",iRet);
 return 0;
}