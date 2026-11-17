/*
    display decimal, octal, hexadecimal ascii table from 0 to 255
*/

#include<stdio.h>
#include<stdlib.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("ASCII TABLE\n ");
    printf("------------------------");
    printf("\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%d\t %o\t %x\t %c\n", iCnt, iCnt, iCnt, iCnt);
    }
    printf("\n");
}
int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}