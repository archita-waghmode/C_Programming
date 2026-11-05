// accept number from user and display multiplication of all digits

#include<stdio.h>
#include<stdlib.h>

int MultDigits(int iNo)
{
    int iDigit = 0, iMult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iMult = 1;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
             iMult = iMult * iDigit;
        }
      
        iNo = iNo / 10;
    }
    return iMult;
}
int main()
{

    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}