/*
    input : abcde
    output : edcba
*/

#include<stdio.h>
#include<stdlib.h>

void StrRevX(char *str)
{
    char len = 0;

    while(str[len] != '\0')
    {
        len++;
    }

    for(int i = len - 1; i >= 0; i--)
    {
        printf("%c",str[i]);
    }
}
int main()
{
    char arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    return EXIT_SUCCESS;
}