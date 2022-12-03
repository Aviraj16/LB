#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


//Step5: Perform the operation of Array
bool CheckIndex(int Arr[],int iSize ,int iNo)
{
    int iCnt = 0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            break;
        }
    }
    if(iCnt==iSize)
    {
        return false;
    }
    else
    {
        return true;
    }    
}

int main()
{
    int * ptr = NULL;
    bool bRet = false;
    int iLength = 0;
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
    //Step4: Call the Function
    bRet = CheckIndex(ptr ,iLength,iValue);
    printf("Enter the  Index of array to access element\n");
    scanf("%d",&iValue);
    
    if(bRet==true)
    {
        printf("Index of element at array\n",iValue);
    }
    else
    {
        printf("Index is not occured in array\n",iValue);
    }

    //Step6: Deallocate the memory
    free(ptr);



    return 0;
}