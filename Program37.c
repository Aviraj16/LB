#include<stdio.h>

int SumNonFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 1;iCnt<iNo;iCnt++)
    {
        if((iNo % iCnt )!= 0)
        {
            iSum = iSum + iCnt;    
        }
    }
    return iSum;
}




int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = SumNonFactors(iValue);

    printf("Sum of Non Factors number is :%d\n",iRet);




    return 0;
} 
/*

#include<stdio.h>


int SumNonFactors(int no)



{


int i =0;
int sum=0;

for (i = 1; i < no ; i ++)
{
if ( ( i % no  )!=0)
{


    sum = sum + i;
}

}
return sum;

}
int main()
{


int value = 0;
int iret = 0;

printf("Enter the number \n");

scanf("%d",&value);



iret = SumNonFactors(value);

printf("Summation of non factors is %d \n",iret);
    return 0;


}
*/