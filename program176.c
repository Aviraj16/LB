
#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst( PPNODE First, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(PNODE));  //1 Allocate Memory

    newn->data = No;

    newn->next = NULL;

    if(*First == NULL)      //If Linked List is Empty
    {
        *First = newn;
    }
    else                //If Linked List contains atleast 1 node
    {
        newn->next = *First;
        *First = newn;
    }
}

void InsertLast(PPNODE First, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(PNODE));  //1 Allocate Memory
    PNODE temp = *First;

    newn->data = No;

    newn->next = NULL;

    if(*First == NULL)      //If Linked List is Empty
    {
        *First = newn;
    }
    else                //If Linked List contains atleast 1 node
    {
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp->next = newn;  
       
    } 
        
}
void DeleteFirst(PPNODE First)
{
    PNODE temp = *First;
    if(*First ==NULL)    //A   //Empty Linked List
    {
        return;
    }
    else if((*First)->next == NULL)  //B   //1 node in Linked List
    {
        free(*First);
        *First = NULL;

    }
    else              //C    // More than 1 node in Linked List
    {
        (*First)=(*First) -> next;
        free(temp);
    }
}
void DeleteLast(PPNODE First)
{
    PNODE temp = *First;
    if(*First ==NULL)       //Empty Linked List
    {
        return;
    }
    else if((*First)->next == NULL)     //1 node in Linked List
    {
        free(*First);
        *First = NULL;

    }
    else                // More than 1 node in Linked List
    {
        while(temp->next->next != NULL)
        {
            temp = temp ->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void InsertAtPos(PPNODE First, int No,int iPos)
{
    int NodeCnt = 0;
    NodeCnt = Count(*First);
    PNODE newn = NULL;
    PNODE temp = NULL;

    if((iPos <1) || iPos >(NodeCnt+1))
    {
        printf("Invalid Position\n");
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(First,No);
    }
    else if(iPos ==(NodeCnt+1))
    {
        InsertLast(First,No);
    }
    else
    {
        newn =(PNODE)malloc(sizeof(PNODE));
        newn ->data = No;
        newn->next = NULL;

        temp = *First;
        int iCnt = 0;

        for(iCnt =1;iCnt<(iPos-1);iCnt++)
        {
            temp = temp ->next;
        }
        newn->next = temp ->next;
        temp->next = newn; 
    }
}

void DeleteAtPos(PPNODE First,int iPos)
{
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;

    int iCnt = 0,NodeCnt =0;

    NodeCnt = Count(*First);

    if(iPos<1 || iPos>NodeCnt)
    {
        printf("Invalid Positionn\n");
        return;
    }
    if(iPos==1)
    {
        DeleteFirst(First);
    }
    else if(iPos == NodeCnt)
    {
        DeleteLast(First);
    }
    else
    {
        temp1 = *First;
        for(iCnt=1;iCnt<(iPos-1);iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;

        temp1->next = temp2->next ;
        //temp1->next = temp1->next->next;     
        free(temp2);
    }
}

void Display(PNODE First)
{
    printf("\nElements from the Linked List are :");
    while(First != NULL)
    {
        printf(" | %d | -> ",First->data);
        First = First->next;
    }
    printf("NULL\n");

}

int Count(PNODE First)
{
    int iCnt = 0;
    while(First != NULL)
    {
        First = First->next;
        iCnt++;
    }
    return iCnt;

}

int main()
{
    //Struct node *Head = NULL;
    PNODE Head = NULL;
    int iCnt = 0;

    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    InsertLast(&Head,101);
    InsertLast(&Head,111);
    InsertLast(&Head,121);

    Display(Head);

    iCnt = Count(Head);

    printf("No of Elements in Linked list are :%d\n",iCnt);
    
    InsertAtPos(&Head,105,5);

    Display(Head);

    iCnt = Count(Head);

    printf("No of Elements in Linked list are :%d\n",iCnt);

    DeleteAtPos(&Head,5);

    Display(Head);

    iCnt = Count(Head);

    printf("No of Elements in Linked list are :%d\n",iCnt);

    DeleteFirst(&Head);
    DeleteLast(&Head);

    Display(Head);

    iCnt = Count(Head);

    printf("No of Elements in Linked list are :%d\n\n",iCnt);

    return 0;


}


/*
    Call by Address
    InsertFirst()
    InsertLast()
    InsertAtPos()

    DeleteFirst()
    DeleteLast()
    DeleteAtPos()

    //Call by Value
    Display()
    Count()

*/