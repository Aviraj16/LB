#include<stdio.h>
#include<stdbool.h>
bool Checkbool(char ch)
{
	if(ch >='0' && ch <='9')
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	char cValue ='\0';
	bool bRet = false;
	
	printf("Please Enter one character\n");
	scanf("%c",&cValue);
	
	bRet = Checkbool(cValue);
	if(bRet==true)
	{
		printf("%c is a digit",cValue);
	}
	else
	{
		
		printf("%c is a not a Digit",cValue);
	}
	
	
	return 0;
}