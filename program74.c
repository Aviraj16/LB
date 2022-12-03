#include<stdio.h>
#include<stdlib.h>

//Step5: Perform the operation of Array
int CountEven(int Arr[],int iSize)
{
    int iCnt = 0, iEvenCnt =0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iEvenCnt++;
        }
    }
    return iEvenCnt;
    
}

int main()
{
    int * ptr = NULL;
    int iLength = 0;
    int iRet  = 0;

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
    iRet = CountEven(ptr ,iLength);
    printf("Number of even elements are is :%d",iRet);

    //Step6: Deallocate the memory
    free(ptr);



    return 0;
}