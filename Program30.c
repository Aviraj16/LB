#include<stdio.h>

int Factorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;
    for(iCnt =1;iCnt<=iNo;iCnt++)
    {
        iFact = iFact + iCnt;
    }

    return iFact;
}

int main()
{

    unsigned long int iRet = 0;
    int iValue = 0;
    printf("Enter Number of elements\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Sum of Factorial is : %d\n",iRet);

    return 0;

}