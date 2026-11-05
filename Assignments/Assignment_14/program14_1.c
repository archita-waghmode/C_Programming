// accept number from user and display the multplication of its factors

#include<stdio.h>
#include<stdlib.h>

int MultFact(int iNo)
{
    int iCnt = 0, iFact = 0;

    for(iCnt = 1, iFact = 1; iCnt <= iNo / 2; iCnt++)
    {
        if((iNo % iCnt)== 0)
        {
            iFact = iFact * iCnt; 
        }
        
    }
    return iFact;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}