#include<stdio.h>
int CountCapital(char *str, char ch)
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if(*str == ch)
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
	//char cValue = '\0';
	int iRet = 0;
	printf("Enter String\n");
	scanf("%[^'\n']s*",&Arr);
	//printf("Enter Charcater to count\n");
	//scanf("%s",&cValue);


	iRet = CountCapital(Arr,'a');

	printf("Freuency of a  is :%d",iRet);
	
	return 0;
}