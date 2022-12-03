
#include<stdio.h>

int CountDigits(int iNo)
{
    //code
    int iCnt = 0;
    if(iNo ==0)     //filter
    {
        return 1;
    }

    if(iNo <0)      //updater
    {
        iNo = -iNo;
    }

    while(iNo>0)
    {
        iNo = iNo/10;
        iCnt++;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Numbers of Digits is : %d\n",iRet);


    return 0;
}
