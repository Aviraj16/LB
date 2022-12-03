//Demonstration of Iteration using While Loop

#include<stdio.h>

int Display(int iValue)
{
    int iCnt = 0;
        //  1           2           3
    for(iCnt = 1; iCnt<= iValue; iCnt++)
    {
        printf("Jay Ganesh...\n");  //  4
    }
}

int main()
{
    int iNo = 0;
    printf("Enter No of iterations \n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}