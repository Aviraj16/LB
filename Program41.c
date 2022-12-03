#include<stdio.h>

void DisplayEvenFactors(int iNo)
{
    int iCnt = 0;
    printf("Even Factors is :\n");
    for(iCnt = 2 ; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt == 0) && (iCnt % 2 == 0))
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    int iRet  =0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    DisplayEvenFactors(iValue);

    return 0;
}