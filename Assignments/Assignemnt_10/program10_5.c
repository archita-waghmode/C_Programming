// convert sqaure feet into square meter

#include<stdio.h>
#include<stdlib.h>


double SquareMeter(int iNo)
{
    double dSqMeter = 0.0;
    dSqMeter = iNo * 0.0929;
    return dSqMeter;
}
int main()
{

    int iValue = 0;
    double dRet = 0.0; 

    printf("Enter area in square feet\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("The area in square meter is : %lf",dRet);
    
    return EXIT_SUCCESS;
}