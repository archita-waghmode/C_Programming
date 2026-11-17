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

BOOL ChkSmall(char ch)
{
    if((ch >= 'a' && ch <= 'z'))
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is small case character\n");
    }
    else
    {
        printf("It is not a small case character\n");
    }


    return EXIT_SUCCESS;
}