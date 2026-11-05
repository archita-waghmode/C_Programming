// display difference between summation of factors and non factors of number

#include<stdio.h>
#include<stdlib.h>

int FactDiff(int iNo)
{
    int iCnt = 0, iFact = 0, iNonFact = 0;
    
    for(iCnt = 1; iCnt <iNo; iCnt++)
    {
        if((iNo % iCnt)== 0)
        {
            iFact = iFact + iCnt;
        }
        else
        {
            iNonFact = iNonFact + iCnt;
        }
    }
    return (iFact - iNonFact);
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d\t",iRet);

    return EXIT_SUCCESS;
}