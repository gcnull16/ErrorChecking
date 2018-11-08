#ifndef ERRORCHECKINGS_H_INCLUDED
#define ERRORCHECKINGS_H_INCLUDED

#define OK 1
#define NOBUENO 0

// Prototype:
// Return type (parameters)

int errorcheck(char grade);

int errorcheck(char grade)
{
    //Initializing data assuming it is wrong
    int returnVal = NOBUENO;

    //10 in case people use lowercase
    //Created collection of valid input\/
    char correctinput[10] = {'A', 'a', 'B', 'b', 'C', 'c', 'D', 'd', 'F', 'f'};

    //iterate through correct input character and see if what user input is in the list/\

    int i;

    for(i = 0; i < 10; i++)
    {
        if(grade == correctinput[i] )
        {
            //validates user input as well as ending the loop
            returnVal = OK;
            break;
        }

    }
    return returnVal;
}


#endif // ERRORCHECKINGS_H_INCLUDED
