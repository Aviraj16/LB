#include<stdio.h>
int CountSmall(char *str)
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if(*str >= 'a' && *str <= 'z')
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
	printf("Enter String\n");
	scanf("%[^'\n']s*",Arr);

	iRet = CountSmall(Arr);

	printf("Freuency of small letters is :%d",iRet);
	
	return 0;
}