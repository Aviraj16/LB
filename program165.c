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

void InsertFirst(PPNODE First,int No)
{
	//Logic
}
void Display(PPNODE First)
{
	//Logic
}
int main()
{
	PNODE Head = NULL;
	InsertFirst(&Head,51);
	InsertFirst(&Head,21);
	InsertFirst(&Head,11);

	Display(Head);
	

	return 0;
}
/*
	void InsertFirst(PPNODE First, int No)
	void InsertLast(PPNODE First,int No)
	void InsertAtPos(PPNODE First,int No,int Pos)

	void DeleteFirst(PPNODE First,int No)
	void DeleteLast(PPNODE First,int No)
	void DeletetAtPos(PPNODE First,int No,int Pos)

	void Display(PNODE First)
	int Count(PNODE First)

///////////////////////////////////////////////////////////////////////////////////

	InsertFirst(&Head , 11)
	InsertLast(&Head,11)
	InsertAtPos(&Head,11,5)

	DeleteFirst(&Head)
	DeleteLast(&Head)
	DeleteAtPos(&Head,5)

	Display(Head)
	Count(Head)
*/
/////////////////////////////////////////////////////////
/*
	Topics to read from C programming for Data Structures

	Primitive Data Types
	Size of all Data Types
	loops(while,for)
	Dynamic Memory (malloc & calloc)
	Pointer and its types
	pointer to pointer
	call by value and call by address
	Structure Declaration
	self referential structure
	memory allocation of Structure
	Direct and Indirect accessing of Structure

*/