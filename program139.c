#include<stdio.h>
int Countch(char *str)
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if(*str == 'a'|| *str == 'A')
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;

}

int main()
{
	char Arr[10];
	int iRet = 0;
	printf("Enter String");
	scanf("%[^'\n']s*",Arr);

	iRet = Countch(Arr);

	printf("Freuency of a is :%d",iRet);
	
	return 0;
}