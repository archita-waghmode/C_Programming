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
/////////////////////////////////////////////////////////
//
//Function name :   Addition
//Input         :   integer , integer
//Output        :   integer
//Description   :   performs addition
//Date          :   04/10/2026
//Author        :   Archita Vinod Waghmode
//
/////////////////////////////////////////////////////////

int Addition(int iNo1,int iNo2)
{
    int iAns= 0;
    iAns = iNo1 + iNo2 ;  // business logic

    return iAns;
}

/////////////////////////////////////////////////////////
//
//entry point of the application
//
/////////////////////////////////////////////////////////

int main()
{
    int iValue1= 0, iValue2= 0, iResult= 0;

    printf("Enter first number:\n");
    scanf("%d",&iValue1);

    printf("Enter second number:\n");
    scanf("%d",&iValue2);

    iResult= Addition(iValue1, iValue2);

    printf("Result is:%d\n",iResult);

    return 0;
    
}

/////////////////////////////////////////////////////////
//
//Step 5 : Test the program
//
// tested test cases
//------------------------------------------------------
//input 1       input 2     output
//------------------------------------------------------
//  10            11          21
//  0             11          11
//  11            0           11  
//  20           -9           11    
//  -9            20          11
//  -20          -11         -31 
//
/////////////////////////////////////////////////////////
