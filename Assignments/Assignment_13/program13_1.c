// return the count of even digits in the number

#include<stdio.h>
#include<stdlib.h>

int CountEven(int iNo)
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
        if((iDigit % 2)== 0 )
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

    iRet = CountEven(iValue);

    printf("%d\n",iRet);

}