//check divisibility by 5 and 3

#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibilty(int iNo)
{
    if((iNo % 5 )== 0 && (iNo % 3)== 0)
    {
        printf("Number is divisible by both");
    }
    else if((iNo % 5)== 0)
    {
        printf("Number is  divisible by 5 only ");
    }
     else if((iNo % 3)== 0)
    {
        printf("Number is  divisible by 3 only ");
    }
    else
    {
        printf("Not divisible by either");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    CheckMultipleDivisibilty(iValue);

    return EXIT_SUCCESS;
}