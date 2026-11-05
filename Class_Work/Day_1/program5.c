/*
    Step 1 : understand the problem statement
    Step 2 : write the algorithm
    Step 3 : decide the programming language
    Step 4 : write the program
    Step 5 : test the program
*/

/////////////////////////////////////////////////////////
//
// Step 1 : understand the problem statement
//          user is going to enter any 2 integers 
//          and we have to perform addition
//
/////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////
// Step 2 : write the algorithm
/*
    START
            accept first number as no1
            accept second number as no2
            create the variable as ans to store the result
            perform the addition and store into ans
            display the result from ans

    END
*/
/////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////
//
// Step 3 : decide the programming language
//              we select C programming
/////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////
//
//Step 4 : write the program
//
/////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int iValue1= 0, iValue2= 0, iResult= 0;

    printf("Enter first number:\n");
    scanf("%d",&iValue1);

    printf("Enter second number:\n");
    scanf("%d",&iValue2);

    iResult= iValue1 + iValue2;   // business logic

    printf("Result is:%d\n",iResult);

    return 0;
    
}