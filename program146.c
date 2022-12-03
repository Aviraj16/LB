#include<stdio.h>
#include<stdbool.h>

bool Check(char *str, char ch)
{
	while(*str != '\0')
	{
		if(*str == ch)
		{

			break;
		}
		str++;
	}
	if(*str == '\0')
	{
		return false;
	}
	else
	{
		return true;
	}

}

int main()
{
	char Arr[10];
	char cValue = '\0';
	bool bRet = false;
	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter Charcater to count\n");
	scanf(" %c",&cValue);


	bRet = Check(Arr,cValue);
	if(bRet==true)
	{
		printf("Character is present ");
	}
	else
	{
		printf("Character is absent");
	}

	
	return 0;
}
