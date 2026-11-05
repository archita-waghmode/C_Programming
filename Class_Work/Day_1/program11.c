#include<stdio.h>
#include<stdlib.h>

int main()
{
    int No = 0;

    printf("Enter number:\n");
    if(scanf("%d",&No) != 1)
    {
        printf("Invalid input\n");

        return EXIT_FAILURE;
    }

    printf("Input is valid");

    return EXIT_SUCCESS;

}

// if scanf cant take values directly exit from program