#include<stdio.h>
#include<stdlib.h>

void CheckEven(int iNo)
{
     if((iNo % 2) ==0)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is Odd");
    }  
}
int main()
{
    int iValue= 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    CheckEven(iValue);

    return EXIT_SUCCESS;
}