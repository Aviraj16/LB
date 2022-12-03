// input    6   4 5
//          15  2,4,6,7,8,9,10,11,12,13,14

#include<stdio.h>

int DisplayNonFactors(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt<iNo;iCnt++)
    {
        if((iNo % iCnt )!= 0)
        {
            printf("%d\n",iCnt);    
        }
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet =DisplayNonFactors(iValue);


    return 0;
}
/*
#include<stdio.h>

void DisplayNonFactors(int no)
{

    int i =0;
    for (i = 1; i < no ; i ++)
    {
        if ( ( i % no  )!=0)
        {
            printf("%d\n",i);
        }
    }
}
int main()
{

    int value = 0;

    printf("Enter the number \n");

    scanf("%d",&value);

    DisplayNonFactors(value);
    return 0;
}
*/