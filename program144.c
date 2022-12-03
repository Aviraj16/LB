#include<stdio.h>
int CountFreq(char *str, char ch)
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
	char cValue = '\0';
	int iRet = 0;
	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter Charcater to count\n");
	scanf(" %c",&cValue);


	iRet = CountFreq(Arr,cValue);

	printf("Freuency of is :%d",iRet);
	
	return 0;
}