//check leap year
// leap year = divisible by 400 or divisible by 4 but not by 100

#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if(iYear % 400 == 0 || (iYear % 4 == 0) && (iYear % 100) != 0)
    {
        printf("It is leap year");
    }
    else if(iYear <= 0 )
    {
        printf("Invalid year");
    }
    else 
    {
        printf("It is not a leap year");
    }
}
int main()
{
    int iYear = 0;

    printf("Enter year:\n");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}