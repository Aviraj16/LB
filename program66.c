#include<stdio.h>

int MinDigit(int iNo)
{
    int iDigit = 0;
    int iMin = 0;

    if(iNo<0)       //updater
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo %10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        if(iMin==0)
        {
            break;
        }
        iNo = iNo/10; 
    }
    return iMin;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please Enter Number:\n");
    scanf("%d",&iValue);

    iRet = MinDigit(iValue);

    printf("Largest Digit is :%d\n",iRet);

    return 0;
}