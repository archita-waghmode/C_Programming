// print even factorial of given number

#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int iNo)
{
     int iCnt = 0, iFact = 1;

     if(iNo < 0)
     {
        iNo = -iNo;
     }

     for(iCnt = 2; iCnt <= iNo; iCnt+=2)
     {
            iFact = iFact * iCnt;
     }    

     return iFact;
}
int main()
{

    int iValue = 0, iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of number is: %d\n",iRet);

    return EXIT_SUCCESS;
}