#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ret= 0;
    int No = 0;

    printf("Enter number:\n");
    ret = scanf("%d",&No);

    printf("Return value is:%d\n",ret);

    return EXIT_SUCCESS;
}

//  scanf returns 0 if entered something which cant be taken by scanf like a character
//  scanf returns 1 if number is entered which can be taken by scanf