// find greater number from 3 numbers

#include<stdio.h>
#include<stdlib.h>

void FindGreatest( int iFirst,int iSecond,int iThird)
{
    if((iFirst >= iSecond) && (iFirst >= iThird))
    {
        printf("Greater number:%d\n",iFirst);
    }
    else if((iSecond >= iFirst) && (iSecond >= iThird))
    {
        printf("Greater number:%d\n",iSecond);
    }
    else
    {
        printf("Greater number:%d\n",iThird);
    }
}
int main()
{
    int iValue1 = 0, iValue2= 0, iValue3 = 0;

    printf("Enter three numbers:\n");
    scanf("%d%d%d", &iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1,iValue2,iValue3);

    return EXIT_SUCCESS;
}