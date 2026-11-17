#include<stdio.h>
#include<stdlib.h>

int main()
{
    int No = 0;

    printf("Enter number:\n");
    if(scanf("%d",&No) != 1)
    {
        fprintf(stderr,"Invalud input\n");  // stderr is console

        return EXIT_FAILURE;
    }

    printf("Input is valid");

    return EXIT_SUCCESS;

}