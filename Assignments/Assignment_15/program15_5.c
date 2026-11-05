// accpet total marks and obtained marks from user and calculate percentage

#include<stdio.h>
#include<stdlib.h>

float Percentage(int iTotal, int iObtain)
{
    float fPer = 0.0f;

    if(iTotal == 0)
    {
        return 0.0;
    }
    fPer = ((float)iObtain/ iTotal) * 100;

    return fPer;
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks\n");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1 , iValue2);

    printf("Percentage is:%f",fRet);

    return EXIT_SUCCESS;
}