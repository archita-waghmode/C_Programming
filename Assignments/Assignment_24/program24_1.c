/*
    input : marvellous
             e
    output : character found
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != 0)
    {
        if(ch == *str)
        {
            return TRUE;
            
        }
        str++;
        
    }
}
int main()
{
    char arr[20];
    char cValue= '\0';
    bool bRet = FALSE;

    printf("Enter string:\n");
    scanf("%[^'\n']s", arr);

    printf("Enter character:\n");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return EXIT_SUCCESS;
}