#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[],int iSize)
{
    int iCnt = 0, iSum = 0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum = iSum+Arr[iCnt];
    }
    return iSum;
}
int main()
{
    int * ptr = NULL;
    int iCnt=0 , iLength = 0 ;
    int iRet = 0;

    printf("Enter number of elements you want to store");
    scanf("%d",&iLength);

    ptr = (int *)(malloc(iLength*sizeof(int)));
    printf("Enter the elements:\n");

    for(iCnt=0;iCnt<5;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    printf("Elements from array are :\n");

    for(iCnt=0;iCnt<5;iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet = Summation(ptr,iLength);
    printf("Summation of all elements is :%d\n",iRet);
    
    return 0;
}
