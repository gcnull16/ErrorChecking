#include <stdio.h>
#include <stdlib.h>
#include "ErrorCheckings.h"

float getLowRange(char grade);


int main()
{
        //Ask for user input
     printf("Enter a Letter grade A - F: ");

    //Store entered value into a char variable
    char userinput;
    scanf("%c", &userinput);

    //Start error checking process
    if(errorcheck(userinput) == OK )
    {
        //print the success message, show lowest possible score
        printf("SUCCESS: You entered: %c\n", userinput);

        printf("Lowest possible score for this letter grade: %.1f", getLowRange(userinput) );


    }
    else
    {
        //print error, you did not give good data
        printf("ERROR404: Not a valid entry, scrub :(\n");
    }

            return 0;
}

float getLowRange(char grade)
{
    float returnval;

    switch(grade)
    {
    case 'A':
    case 'a':
        returnval = 93.9F;
        break;

    case 'B':
    case 'b':
        returnval = 82.9F;
        break;

    case 'C':
    case 'c':
        returnval = 72.9F;
        break;

    case 'D':
    case 'd':
        returnval = 60.0F;
        break;

    case 'F':
    case 'f':
        returnval = 59.9F;
        break;
    }
    return returnval;
}
