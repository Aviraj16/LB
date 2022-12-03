//multiplication of numbers give input from user
#include<stdio.h>

int main()
{
    int iNo1 = 0; 
    int iNo2 = 0;
    int iMult = 0;
    

    printf("Enter first number\n");
    scanf("%d",&iNo1);
    printf("Enter Second Number\n");
    scanf("%d",&iNo2);

    iMult = iNo1*iNo2;

    printf("Multiplication is : %d",iMult);



    return 0;
}