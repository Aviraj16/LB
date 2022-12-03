#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


//Step5: Perform the operation of Array
bool CheckOcc(int Arr[],int iSize ,int iNo)
{
    int iCnt = 0;
    int iFreq = 0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iFreq++;
        }
    }
    if(iFreq==0)
    {
        return false;
    }
    else
    {
        return true;
    }
    // return iFreq;
    
    
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
    printf("Enter the element to find out\n");
    scanf("%d",&iValue);

    //Step2: Allocate memory for Array
    ptr = (int *)malloc(iLength*sizeof(int));
    
    //Step3: Accept elements of Array
    printf("Please Enter Element\n");
    for(int i = 0;i<iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }
    //Step4: Call the Function
    bRet = CheckOcc(ptr ,iLength,iValue);
    
    if(bRet==true)
    {
        printf("%d is occured in array\n",iValue);
    }
    else
    {
        printf("%d is not occured in array\n",iValue);
    }

    //Step6: Deallocate the memory
    free(ptr);



    return 0;
}