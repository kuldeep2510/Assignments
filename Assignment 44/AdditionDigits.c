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
void AddDigits(PNODE Head)
{

   
   int i=0,iDigit=0,iSum=0,iNo=0;
   PNODE temp=Head;
  
   
   while (temp!=NULL)
   {
      iNo=temp->Data;
      while (iNo!=0)
      {
        
       iDigit=iNo%10;
      iSum=iSum+iDigit;
      iNo=iNo/10;
      }
      printf("%d\t",iSum);
       iSum=0;
     temp=temp->Next;
    
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
  
   
 
    
AddDigits(First);
 

 return 0;
}