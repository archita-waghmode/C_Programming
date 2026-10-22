// check voting eligibilty

#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibilty(int iAge)
{
    if(iAge >= 18)
    {
        printf("You are eligible");
    }
    else if(iAge <= 0)
    {
        printf("Invalid Age");
    }
    else
    {
        printf("Your are not eligible");
    }
}
int main()
{
    int iAge = 0;

    printf("Enter your age:\n");
    scanf("%d",&iAge);

   CheckVotingEligibilty(iAge); 

    return EXIT_SUCCESS;
}