#include<stdio.h>

int CountEvenDigits(int iNo)
{
    //code
    int iDigit = 0,iEvenCnt = 0  ;
    
    if(iNo<0)           //updater
    {
        iNo = -iNo;
    }

    while(iNo!=0)
    {
        
        iDigit = iNo%10;
        if(iDigit %2==0)
        {
            iEvenCnt++;
        }
        iNo = iNo/10;
        
    }
    return iEvenCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = CountEvenDigits(iValue);

    printf("Even Numbers of Digits is : %d\n",iRet);


    return 0;
}