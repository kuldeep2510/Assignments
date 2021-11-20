#include<iostream>
using namespace std;
 

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
int FirstOccorrance(PNODE Head,int no)
{
   int iCnt=0;
  
   while (Head!=NULL)
   {
      if(Head->Data==no)
      {
         break;
        
      }
      iCnt++;
   }
   return iCnt;
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
   
   printf("Which number\n");
   scanf("%d",iNo);
   
  Display(First);
    
 iRet=FirstOccorrance(First,iNo);
 printf("occord at\n",iRet);

 return 0;
}