/*
    count capital letters
    input : Marvellous Multi OS
    output : 4
*/

#include<stdio.h>
#include<stdlib.h>

void Reverse(char *str)
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

    printf("Enter a string:\n");
    scanf("%[^'\n']s", arr);

    Reverse(arr);

    return EXIT_SUCCESS;
}