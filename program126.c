#include<stdio.h>
#include<stdbool.h>
bool Checkbool(char ch)
{
	if(ch >='a' && ch <='z')
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
		printf("%c is a small case letter",cValue);
	}
	else
	{
		
		printf("%c is a not small case letter",cValue);
	}
	
	
	return 0;
}