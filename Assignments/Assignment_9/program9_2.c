// convert US dollar into Indian rupees
// consider 1$ = 70 rupees

#include<stdio.h>
#include<stdlib.h>

int DollarToINR(int iNo)
{
     int iSum = 0;
      
     iSum = iNo * 70;

    return iSum;
}
int main()
{

    int iValue = 0, iRet = 0;

    printf("Enter number of USD:\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is: %d\n",iRet);

    return EXIT_SUCCESS;
}