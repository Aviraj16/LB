#include<stdio.h>
void Display(int iNo)
{
    
    register int iCnt = 0;
        //  1       2           3
    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf("%d\n",iCnt);//    4
    }
}

int main()
{
    int iNo = 0;
    printf("Enter till what that you have Number of elements  \n");
    scanf("%d",&iNo);

    
    Display(iNo);

    return 0;
}