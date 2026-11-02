// print differnce between even and odd factorial of given number

#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
     int iCnt = 0, iEvenFact = 1, iOddFact = 1;

     if(iNo < 0)
     {
        iNo = -iNo;
     }

    //  even factorial

     for(iCnt = 2; iCnt <= iNo; iCnt+=2)
     {
            iEvenFact = iEvenFact * iCnt;
     }

    //  odd factorial

     for(iCnt = 1; iCnt <= iNo; iCnt+= 2)
     {
            iOddFact = iOddFact * iCnt;
     }    

     return iEvenFact - iOddFact;
}
int main()
{

    int iValue = 0, iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is: %d\n",iRet);

    return EXIT_SUCCESS;
}