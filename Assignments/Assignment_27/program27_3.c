/*
    count small letters - capital letters
    input : Marvellous
    output : 10 - 1= 9
*/

#include<stdio.h>
#include<stdlib.h>

int Difference(char *str)
{
    int iBig = 0, iSmall = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        if(*str >= 'A' && *str <= 'Z')
        {
            iBig++;
        }
        str++;
    }
    

    return iSmall - iBig;
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter a string:\n");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}