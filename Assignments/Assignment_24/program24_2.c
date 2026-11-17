/*
    input : marvellous
             e
    output : 1
*/

#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != 0)
    {
        if(ch == *str)
        {
            iCount++;
            
        }
        str++;
        
    }
    return iCount;
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

    printf("Character frequency is:%d\n",iRet);

    return EXIT_SUCCESS;
}