#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt =1;iCnt<=iNo;iCnt++)
    {
        printf("Marvellous %d \n",iCnt);
    }
}

int main()
{
    int iNo;
    printf("Enter Number of iterations\n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}