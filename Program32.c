#include<stdio.h>
//O(N/2)
void DisplayFactors(int iNo)
{
    int iCnt = 0;
    printf("The factors are :\n",iCnt);
    for(iCnt =1;iCnt<=(iNo/2); iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            printf("%d\n",iCnt);
        }
    }


}

int main()
{
    int iValue = 0;
    printf("Enter the number   \n");
    scanf("%d",&iValue);


    DisplayFactors(iValue);


    return 0;
}
