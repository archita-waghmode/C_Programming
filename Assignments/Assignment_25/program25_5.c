/*
    division A = 7am
              B = 8:30
              c = 9:30
              D = 10:30
*/

#include<stdio.h>
#include<stdlib.h>

void DisplaySchedule(char ch)
{
    if(ch == 'A')
    {
        printf("Your exam time is : 7 am\n");
    }
    else if(ch == 'B')
    {
        printf("Your exam time is : 8:30 am\n");
    }
    else if(ch == 'C')
    {
        printf("Your exam time is : 9:30 am\n");
    }
    else if(ch == 'D')
    {
        printf("Your exam time is : 10:30 am\n");
    }
    else 
    {
        printf("Invalid division\n");
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter your division:\n");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}