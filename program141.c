#include<stdio.h>
int CountCapital(char *str)
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if(*str >= 'A' && *str <= 'Z')
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;

}

int main()
{
	char Arr[20];
	int iRet = 0;
	printf("Enter String\n");
	scanf("%[^'\n']s*",Arr);

	iRet = CountCapital(Arr);

	printf("Freuency of Capital letters is :%d",iRet);
	
	return 0;
}