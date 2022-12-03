#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iDigit = 0,iRev = 0 ;
    int iTemp = iNo;
   
    for(iRev= 0;iNo!=0;iNo=iNo/10)
    {        
        iDigit = iNo%10;
        iRev = (iRev *10) + iDigit; 
            
    }
    if(iTemp==iRev)
    {
        return true;
    }
    else
    {
        return false;
    }
}
    int main()
    {
        int iValue = 0;
        bool bRet = 0;
        printf("Enter Number :\n");
        scanf("%d",&iValue);

        bRet = CheckPallindrome(iValue);
        if(bRet == true)
        {
            printf("%d is pallindrome\n",iValue);
        }
        else
        {
            printf("%d is not pallindrome\n",iValue);   
        }

        return 0;
    }