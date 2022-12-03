//Rows  4
//Column    4
/*
    *   *   *   *
    *   *   *   *
    *   *   *   *
    *   *   *   *
*/

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    int iCmt = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt=1;iCnt<=4;iCnt++)
    {
        for(iCmt=1;iCmt<=iNo;iCmt++)
        {
            printf("*\t");                          
        }
        printf("\n");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}