/*
    input : a - z or A - Z
    output : true

    input : &
    output : false
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' ||
            *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' )
            {
                 return TRUE;
            }
            else
            {
                return FALSE;
            }
            str++;
    }
}
int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter the string:\n");
    scanf("%[^'\n']s", arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains vowels\n");
    }
    else
    {
        printf("Do not contain vowels\n");
    }


    return EXIT_SUCCESS;
}