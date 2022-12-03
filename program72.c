#include<stdio.h>
#include<stdlib.h>
//float Average (int * Arr , int iSize)
float Average(int Arr[],int iSize)
{
    int iSum = 0, iCnt =0;
        //1         2       3
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum = iSum + Arr[iCnt];//4
    }
    return iSum/iSize;
}
int main()
{
    int * ptr = NULL;
    int iLength = 0;
    float fRet  = 0.0f;

    printf("Please Enter no of elements :\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength*sizeof(int));

    printf("Please Enter Element\n");
    //     1           2    3
    for(int i = 0;i<iLength;i++)
    {
        scanf("%d",&ptr[i]);//  4
    }

    //fRet= Average(500,iLength = 5)
    fRet = Average(ptr ,iLength);
    printf("Average is :%f",fRet);
    free(ptr);



    return 0;
}