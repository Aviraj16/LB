//Demonstration of Iteration using while Loop

#include<stdio.h>

void Display(int iValue)
{

    int iCnt = 1;   //  1
        //  2
    while(iCnt<=iValue)
    {
        printf("Jay Ganesh...\n");  //4
        iCnt++;     //3
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