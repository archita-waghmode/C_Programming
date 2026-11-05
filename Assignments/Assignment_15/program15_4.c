// accept three numbers and print its multiplication

#include<stdio.h>
#include<stdlib.h>

int Multiply(int No1, int No2, int No3)
{
     if(No1 == 0 && No2 == 0 && No3 == 0)
     {
        return 0;
     }
     else if(No1 == 0 && No2 == 0)
     {
        return No3;
     }
     else if(No1 == 0 && No3 == 0 )
     {
        return No2;
     }
     else if(No2 == 0 && No3 == 0)
     {
        return No1;
     }
     else if(No1 == 0)
     {
        return No2 * No3;
     }
     else if(No2 == 0)
     {
        return No1 * No3;
     }
     else if(No3 == 0)
     {
        return No1 * No2;
     }
    return No1 * No2 * No3;

}
int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3= 0, iRet = 0;

    printf("Enter three numbers:\n");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is :%d\n",iRet);

    return EXIT_SUCCESS;
}