#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct node
{
    int data;
    struct node * next;
    struct node * prev;     //X
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(PNODE));
    newn->data = no;
    new->next = NULL;
    newn->prev = NULL;  //X

    if(*First ==NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        (*First)->prev = newn;  //X
        *First = newn;
    }
}

void InsertLast(PPNODE First,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(PNODE));
    PNODE temp = *First;

    newn->data = no;
    new->next = NULL;
    newn->prev = NULL;  //X

    if(*First ==NULL)
    {
        *First = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp->next = newn;
        newn->prev = temp;      //X
    }
}

void Display(PNODE First)
{
    printf("Elements of  linked list are \n");

    while(First != NULL)
    {
        printf("| %d | -> ",First->data)
        First = First ->next;
    
    }

}

int main()
{
    PNODE Head = NULL;
 

    return 0;
}