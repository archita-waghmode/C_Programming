// return the count of digits in range 3 and 7 in the number

#include<stdio.h>
#include<stdlib.h>

int CountRange(int iNo)
{
    int iCnt = 0;
    int iDigit= 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit >= 3 && iDigit <= 7 )
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("%d\n",iRet);

}