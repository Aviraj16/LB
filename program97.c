//4
// A    B   c   D

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    char ch = 'A';
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++,ch++)
    {
        printf("%c\t",ch);                            
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}