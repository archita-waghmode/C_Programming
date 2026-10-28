

#include<stdio.h>
#include<stdlib.h>
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

int Addition(
                int iNo1,   //first input
                int iNo2    //second input
            )
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
    if(scanf("%d",&iValue1)!= 1)
    {
        fprintf(stderr,"unable to proceed as input is invalid");

        return EXIT_FAILURE;
    }

    printf("Enter second number:\n");
    if(scanf("%d",&iValue2)!= 1)
    {
        fprintf(stderr,"unable to proceed as input is invalid");

        return EXIT_FAILURE;
    }

    iResult= Addition(iValue1, iValue2);

    printf("Result is:%d\n",iResult);

    return EXIT_SUCCESS;
    
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
