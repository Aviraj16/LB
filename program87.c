#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


//Step5: Perform the operation of Array
int CheckOcc(int Arr[],int iSize ,int iNo)
{
    int iCnt = 0,iPos = -1;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iPos = iCnt;
        }
    }
    return iCnt;    
}

int main()
{
    int * ptr = NULL;
    int iLength = 0 , i=0;
    int iRet  = 0,iValue = 0;

    //step1: Accept Size of Array
    printf("Please Enter no of elements :\n");
    scanf("%d",&iLength);
   

    //Step2: Allocate memory for Array
    ptr = (int *)malloc(iLength*sizeof(int));
    
    //Step3: Accept elements of Array
    printf("Please Enter Element\n");
    for(int i = 0;i<iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Enter the element to find out in array\n");
    scanf("%d",&iValue);
    //Step4: Call the Function
    iRet = CheckOcc(ptr ,iLength,iValue);
    
    if(iRet== -1)
    {
        printf("%d is not found  at Index in array\n",iValue);
    }
    else
    {
        printf("%d is  found in array for last time at Index %d",iValue,iRet);
    }

    //Step6: Deallocate the memory
    free(ptr);



    return 0;
}