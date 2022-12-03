#include<stdio.h>

void CountEvenOddDigits(int iNo)
{
    //code
    int iDigit = 0,iEvenCnt = 0 ,iOddCnt = 0 ;

    if(iNo == 0)        //filter
    {
        iEvenCnt++;
  
    }   
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
        else
        {
            iOddCnt++;
        }
        iNo = iNo/10;        
    }
    printf("Number of Even Digits are :%d\n",iEvenCnt);
    printf("Number of Odd Digits are :%d\n",iOddCnt);
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    CountEvenOddDigits(iValue);

    return 0;
}