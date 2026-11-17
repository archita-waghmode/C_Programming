/*
    input : marvellous8990
    output : 8990
*/

#include<stdio.h>
#include<stdlib.h>
int CountWhite(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s", arr);

    iRet = CountWhite(arr);

    printf("Number of white spaces :%d\n",iRet);

    return EXIT_SUCCESS;

}