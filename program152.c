#include<stdio.h>

void struprX(char *str)
{
	while(*str != '\0')
	{
		if(*str >='a' && *str <='z')
		{
			*str = *str +32;
		}

		str++;
	}
} 

int main()
{
	char arr[20];

	printf(" Please Enter String\n");
	scanf("%[^'\n']s",arr);

	struprX(arr);

	printf("string after conversion is :%s\n",arr);


	return 0;
}