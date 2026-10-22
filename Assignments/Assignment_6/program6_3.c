//calculate shopping discount

#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount < 0)
    {
        printf("Invalid purchase amount\n");
    }
    else if(fAmount <1000)
    {
        fDiscount = 0;
    }
    else if(fAmount <5000)
    {
        fDiscount = fAmount * 0.10f;
    }
    else
    {
        fDiscount= fAmount * 0.20f;
    }
    if (fAmount > 0)
    {
        fFinalAmount = fAmount - fDiscount;
        printf("Payable amount: %f\n",fFinalAmount);
    }
}
int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount:\n");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}
