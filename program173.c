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

void Display(PNODE First)
{
    printf("Elements from the Linked List are :\n");
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

    printf("No of Elements in Linked list are :%d",iCnt);

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