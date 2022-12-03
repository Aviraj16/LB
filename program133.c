#include<stdio.h>
#include<stdbool.h>

int main()
{
	char Arr[30];

	
	printf("Please Enter  Name\n");
	scanf("%[^\n]s",&Arr);
	
	printf("Your name is %s",Arr);
	
	
	return 0;
}