#include<stdio.h>

//  Input: 5
//  Output: 5   10  15  20  25  30  35  40  45  50 

void DisplayTable(int iNo)
{
    //  Input : 5

    int iCnt = 0;
    for (iCnt = 1 ;iCnt  <= 10 ; iCnt++)
    {
        printf("\n%d",iNo *iCnt);
    }


}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);
    printf("Table of %d is:",iValue);

    DisplayTable(iValue);

    return 0;
}