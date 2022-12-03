#include<stdio.h>
#include<stdlib.h>

//Step5: Perform the operation of Array
int CalFreq(int Arr[],int iSize ,int iNo)
{
    int iCnt = 0;
    int iFreq = 0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    if(Arr[iCnt]==iNo)
    {
        iFreq++;
    }
    return iFreq;
    
    
}

int main()
{
    int * ptr = NULL;
    int iLength = 0;
    int iRet  = 0,iValue = 0;

    //step1: Accept Size of Array
    printf("Please Enter no of elements :\n");
    scanf("%d",&iLength);
    printf("Enter the element to find out the freqency\n");
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
    iRet = CalFreq(ptr ,iLength,iValue);
    printf("Freuqency of %d is %d\n ",iValue,iRet);

    //Step6: Deallocate the memory
    free(ptr);



    return 0;
}