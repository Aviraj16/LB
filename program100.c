//Rows  4
//Column    4
/*
    *   *   *   *
    *   *   *   *
    *   *   *   *
    *   *   *   *
*/

#include<stdio.h>
void Display(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    if(iRow<0)
    {
        iRow = -iRow;
    }
    if(iCol<0)
    {
        iCol = -iCol;
    }

    for(i=1;i<=iRow;i++)        //Outer
    {
        for(j=1;j<=iCol;j++)    //Outer 4 OF Outer
        {
            printf("*\t");       //4 of Inner                   
        }
        printf("\n");
        //sleep();
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    printf("Enter Number of Rows\n");
    scanf("%d",&iValue1);
    printf("Enter Number of Columns\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
    return 0;
}