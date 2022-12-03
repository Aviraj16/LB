#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    iCnt = 1;
    while(iCnt<=iNo)
    {
        printf("Marvellous : %d \n",iCnt);
        iCnt++;
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