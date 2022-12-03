//multiplication of numbers give input from user using functional approach
#include<stdio.h>

int Multiplication(int iValue1, int iValue2)
{
   
    int iRet =0;
    iRet = iValue1*iValue2;
    return iRet;

}

int main()
{
    int iNo1 = 0; 
    int iNo2 = 0;
    

    printf("Enter first number\n");
    scanf("%d",&iNo1);
    printf("Enter Second Number\n");
    scanf("%d",&iNo2);

    int iAns = 0;

    iAns = Multiplication(iNo1,iNo2);

    printf("Multiplication is : %d",iAns);



    return 0;
}