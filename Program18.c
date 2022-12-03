//Demonstration of Iteration using while Loop

#include<stdio.h>

void Display()
{
    int iCnt = 0;
        //  1       2           3
    for(iCnt = 1; iCnt <= 5 ; iCnt++)
    {
        printf("Jay Ganesh...\n");      //4
    }

    iCnt = 1;   //  1
        //  2
    while(iCnt<=5)
    {
        printf("Jay Ganesh...\n");  //4
        iCnt++;     //3
    }
}

int main()
{
    Display();

    return 0;
}