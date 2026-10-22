//check admission eligibility

#include <stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks,int iAge)
{
    if((fMarks <= 100 && fMarks > 0) && (iAge >= 17 && iAge <=18))
    {
        printf("Eligible for admission\n");
    }
    else if((fMarks > 100) && (iAge < 0))
    {
        printf("Invalid input");
    }
    else
    {
        printf("Not eligible");
    }
}


int main()

{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age:\n");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}