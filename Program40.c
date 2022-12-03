#include<stdio.h>
void DisplayReverse(int iNo)
{
    
    int iCnt = 0;
    
    iCnt = iNo;
    printf("----------------------------------------------\n");
    while(iCnt>=1)
    {    
        printf("%d\t",iCnt);
        iCnt--;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number :\n");
    scanf("%d",&iValue);

    DisplayReverse(iValue);

    return 0;
}