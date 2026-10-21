//
// if input is 12 and 5
// print 12 for5 times    12 12 12 12 12

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for(int iCnt = 0; iCnt < iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    printf("Enter frequency:\n");
    scanf("%d",&iCount);

    Display(iValue , iCount);

    return 0;
}