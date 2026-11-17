/*
    display deciaml, octal and hexadecimal values of given input
*/

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    printf("Decimal : %d\t",ch);
    printf("Octal : %o\t",ch);
    printf("Hexadecimal : %x\t",ch);
}
int main()
{
    char cValue = '\0';

    printf("Enter a character\n");
    scanf("%c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}