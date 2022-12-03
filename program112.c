
/*
	//Rows   4
	//Column 4
	
    *	$	$	$
	*	*	$	$
	*	*	*	$
	*	*	*	*
*/

#include<stdio.h>
void Display(int iRow,int iCol)
{
	int i = 0,j=0;
	if(iRow != iCol)
	{
		printf("Row Number and Column Number are Different\n");
		return;
	}
	for(i = 1;i<=iRow;i++)
	{
		for(j = 1;j<=iCol;j++)
		{
			if(i>=j)
			{	
				printf("*\t");
			}
			else
			{
				printf("$\t");
			}
		}
		printf("\n");
	}    
}
int main()
{
    int iValue1= 0 ,iValue2= 0 ;
    printf("Enter Number of Rows\n");
    scanf("%d",&iValue1);
    
    printf("Enter Number of Columns\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
}