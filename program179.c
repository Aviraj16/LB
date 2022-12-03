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
            temp= temp-> newn;
        }
        temp->next = newn;
        newn->prev = temp;      //X
    }
}

int main()
{
    PNODE Head = NULL;
 

    return 0;
}