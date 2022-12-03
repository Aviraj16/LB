#include<stdio.h>
#include<stdbool.h>
bool checkperfect(int no)
{

    int iCnt = 0;
    int iSum = 0;

    printf("Factors are :\n");

    for(iCnt = 1; iCnt <=(iNo/2) ; iCnt ++ )
    {
        if((iNo % iCnt )== 0)
        {
            printf("%d \n ",iCnt);
            iSum = iSum + iCnt;    
        }

    }
        if(isum == no)
        {


            return true;
        }
        else {


            return false;
        }


}

int main()
{
int ivalue = 0;
bool bRet = false;

printf("Enter Number \n");
scanf("%d", &ivalue);

bRet = checkperfect(ivalue);

if ( bRet == true)
{

printf("  %d is Perfect Number\n",ivalue);

}
else {



    printf("%d is not Perfect number\n",ivalue);
}



    return 0;
}