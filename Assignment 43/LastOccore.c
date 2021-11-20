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
int Occrance(PNODE Head,int no)
{
   int iCnt=1,iMant=1;
   PNODE temp=Head;

   PNODE kemp=Head;

   while (kemp->Data!=no)
   {
      kemp=kemp->Next;
   }
   if (kemp==NULL)
   {
     return 0;
   }

   while (temp->Next!=NULL)
   {  
      if(temp->Data==no)
      {
        iMant=iCnt;
      }
        iCnt++;
     temp=temp->Next;
     
   }
   
   
   
   return iMant;
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
   InsertFirst(&First,40);
   InsertFirst(&First,50);
    Display(First);
   printf("\nWhich Number\n");
   scanf("%d",&iNo);
   
 
    
iRet=Occrance(First,iNo);
 printf("occord at\n%d",iRet);

 return 0;
}