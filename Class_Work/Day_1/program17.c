#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iValue= 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    if((iValue % 2) ==0)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is Odd");
    }

    return EXIT_SUCCESS;
}