#include<stdio.h>

////////////////////////////////////////////////////
//
//Function Name :    Accept
//Description   :    It is used to print *
//Input         :    Integer
//Output        :    *
//Author        :    Archita Vinod Waghmode
//Date          :
//
///////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt=1; iCnt<= iNo; iCnt++)
    {
        printf("*\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    Accept(iValue);

    return 0;
}