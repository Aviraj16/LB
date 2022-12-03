#include<stdio.h>
void Display()
{
    
    register int iCnt = 0;
        //  1       2           3
    for(iCnt = 1; iCnt <= 5 ; iCnt++)
    {
        printf("%d\n",iCnt);//    4
    }
}

int main()
{
    Display();

    return 0;
}