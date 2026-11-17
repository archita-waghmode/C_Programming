/*
    input :  A - Z
    output : it is capital character

    input : d
    output : it is not a capital character
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkCapital(char ch)
{
    if((ch >= 'A' && ch <= 'Z'))
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character:\n");
    scanf("%c", &cValue);

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is capital character\n");
    }
    else
    {
        printf("It is not a capital character\n");
    }


    return EXIT_SUCCESS;
}