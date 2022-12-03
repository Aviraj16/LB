//Steps to follow while writing program

/*    
    step1:Understand the problem statement
    step2:write the algortihm
    step3:decide the programming language
    step4:write the program
    step5:test the program
*/

/*
    problem statement : Accept the number from user and check whether it is divisible by 5 or not
    Input:23
    Output:23 is not divisible by 5
    Input:25
    Output:25 is divisible by 5
    Input:20
    Output:20 is divisible by 5
*/

//algorithm
/*  
    START
        Accept number from user as No
        Divide that number by 5 and check the value of reminder
        if the value is 0
            then display as No is divisible by 5
        otherwise
            Display ass No is not divisible by 5
    END
*/

#include<stdio.h>
#include<stdbool.h>

/*
    Function Name   :   Divisible by 5
    Description     :   Accept the number from user and check whether it is divisible by 5 or not
    Input           :   Integer
    Output          :   Integer
    Author          :   Aviraj Latpate
    Date            :   12th October 2022
*/

bool DivisibleByFive(int iValue)
{
    int iAns = 0;
    iAns = iValue % 5;

    if(iAns ==0)
    {
        return true;
    }
    else
    {
        return false;
    }

}

//Entry Point of the Application

int main()
{
    int iNo1 =0;
    printf("Enter the Number:");
    scanf("%d",&iNo1);

    bool bRet = 0;
    bRet = DivisibleByFive(iNo1);

    if(bRet==true)
    {
        printf("%dis divisible by 5 \n",iNo1);
    }
    else
    {
        printf("%dis not divisible by 5 \n",iNo1);
    }

    return 0;
}