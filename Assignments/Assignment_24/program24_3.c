/*
    input : marvellous
             e
    output : 4   = index value
*/

#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(ch == *str)
        {
           return iCount;
            
        }
        str++;
        iCount++; 
    }
    return -1;
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

    iRet = CountChar(arr, cValue);

        printf("index : %d\n",iRet);

    return EXIT_SUCCESS;
}