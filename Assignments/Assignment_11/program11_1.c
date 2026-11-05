// print range from starting point to ending point
// eg - starting point = 3, ending point = 7   output = 3 4 5 6 7
#include<stdio.h>
#include<stdlib.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

        if(iStart > iEnd)
        {
            printf("Invalid range\n");
        }
        else
        {
             for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
             printf("%d\t",iCnt);
        }
  
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point:\n");
    scanf("%d",&iValue1);

    printf("Enter ending point:\n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);

    return EXIT_SUCCESS;
}