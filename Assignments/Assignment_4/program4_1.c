//check if the number is positive or negative

#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo)
{
    if(iNo > 0)
    {
        printf("Number is positive\n");
    }
    else if(iNo == 0)
    {
        printf("Number is Zero\n");
    }
    else
    {
        printf("Number is negative\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}