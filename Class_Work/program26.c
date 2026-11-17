#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];
    
    printf("Enter your name:\n");
    scanf("%[^'\n']s",sName); // "%[^'\n']s" regular expression to accept input until enter is pressed

    printf("Welcome %s\n",sName);

    return EXIT_SUCCESS;
}