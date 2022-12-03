#include<stdio.h>

int CountDigits(int iNo)
{
    //code
    int iDigit = 0,iSum = 0;
    
    if(iNo<0)           //updater
    {
        iNo = -iNo;
    }

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