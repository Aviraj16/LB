
#include<stdio.h>

int CountDigits(int iNo)
{
    //code
    int iSum = 0;
    int iDigit = 0;

    while(iNo!=0)
    {
        iDigit = iNo%10;
        iSum = iSum + iDigit;
        iNo = iNo/10;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Sum of Digits is : %d\n",iRet);


    return 0;
}
