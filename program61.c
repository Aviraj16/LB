    #include<stdio.h>
    #include<stdbool.h>

    int Reverse(int iNo)
    {
        //code
        int iDigit = 0,iRev = 0 ;
    
        if(iNo<0)           //updater
        {
            iNo = -iNo;
        }
        while(iNo!=0)
        {        
            iDigit = iNo%10;
            iRev = (iRev *10) + iDigit; 
            iNo = iNo/10;       
        }
        return iRev;
    }
    bool CheckPallindrome(int iData)
    {
        int iReverse = 0;
        iReverse = Reverse(iData);
        return (iReverse==iData);
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