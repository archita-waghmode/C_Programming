// display reverse table

#include<stdio.h>
#include<stdlib.h>

void TableRev(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0, iTable = 1;

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
       iTable = iNo * iCnt;

       printf("%d\t",iTable);
    }

   
}
int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    TableRev(iValue);

    return EXIT_SUCCESS;
}