    #include<stdio.h>

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
            
    int main()
    {
        int iRet = 0;
        printf("Enter Number :\n");
        scanf("%d",&iValue);

        int iValue = 0;
        iRet = Reverse(iValue);

        printf("Reverse number is : %d\n",iRet);

        return 0;
    }