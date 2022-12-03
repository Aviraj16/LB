#include<stdio.h>
#include<stdlib.h>

int ChkLastOcc(int Arr[],int iSize , int iNo)        //5
{
    int iCnt = 0;

    for(iCnt= iSize-1;iCnt>=0;iCnt--)      //N
    {
        if(Arr[iCnt]==iNo)
        {
            break;
        }
    }    
    return iCnt;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i= 0, iRet= 0, iValue=0;

    printf("Enter No of Elements\n");           //1
    scanf("%d",&iLength);

    ptr = (int*)malloc(sizeof(int)*iLength);        //2

    printf("Enter the elements\n");     //3

    for(i=0;i<iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Enter the element to find out the index \n");
    scanf("%d",&iValue);

    iRet =ChkLastOcc(ptr,iLength,iValue);        //4

    printf("Last Occurance No %d  is at Index :%d",iValue,iRet);       

    free(ptr);          //6



    return 0;
}