// convert farenheit into celsius

#include<stdio.h>
#include<stdlib.h>


double FhtoCs(float ftemp)
{
    double dtemp = 0.0;
   dtemp = ((ftemp - 32) *(5.0/9.0));
    return dtemp;
}
int main()
{

    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Farenheit:\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("the temperature in Celsius is:%lf",dRet);
    
    return EXIT_SUCCESS;
}