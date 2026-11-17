/*
    input : marvellous
             e
    output : 4   = index value

    input : marvellous multi os
            m
    output : 11    last occurence
*/

#include<stdio.h>
#include<stdlib.h>

int LastChar(char *str, char ch)
{
    int iCount = 0;
    int iLast = -1;

    while(*str != '\0')
    {
        if(ch == *str)
        {
           iLast =  iCount;
            
        }
        str++;
        iCount++; 
    }
    return iLast;
}
int main()
{
    char arr[20];
    char cValue= '\0';
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^'\n']s", arr);

    printf("Enter character:\n");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);

        printf("index : %d\n",iRet);

    return EXIT_SUCCESS;
}