#include<stdio.h>

int main()
{
	int i = 0;
	printf("\t-------------------------------------------------------\n");
	printf("-----------------------ASCII TABLE---------------------\n");
	printf("-------------------------------------------------------\n");
	
	printf("\t\tCharacter\tDecimal\t\tHex\tOctal\n");
	
	for(i = 0;i<127;i++)
	{	
		printf("\t\t%c\t\t%d\t\t%x\t\t%o\n",i,i,i,i);
		
		
		
		
	}
	printf("-------------------------------------------------------\n");
	
	
	return 0;
}