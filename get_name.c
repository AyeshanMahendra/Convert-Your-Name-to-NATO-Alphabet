// Implementation of the get_name function

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "natoaux.h"

/*
    - This function get the user input and store it as a string at the given buffer location
    - Will only accpet up to (given buffer size - 2) characters
    - Will re-prompt the user for input when
        a. The user input is larger than the accepted length (given buffer size - 2)
        b. The user input is a blank entry
    - This function does not reject any non-alphabetic characters
*/
void get_name(char *buffer)
{
    do
    {
        printf("What's your name? ");
        // getting the user input
        fgets(buffer, MAX_LENGTH, stdin);

        // checking whether the input is a blank line
        if (is_blank(buffer))
        {
            // instructing the user to enter a valid name
            printf("Please enter a valid name\n");
        }

        // checking whether the user input is larger than the defined buffer size
        if (is_invalid_size(buffer))
        {
            // instructing the user to enter a name with valid length
            printf("Please enter a name shorter than %i characters\n", MAX_LENGTH - 1);

            // clearing the stdin buffer
            // code source - https://www.youtube.com/watch?v=N7-MueK2CX8&ab_channel=PortfolioCourses
            int c;
            while ( (c = getchar()) != '\n' && c != EOF) {}
        }
    }
    while (is_blank(buffer) || is_invalid_size(buffer));

    // removing the trailing '\n' character from the user input
    buffer[strcspn(buffer, "\n")] = '\0';
}



// returns true if the user input is blank line
bool is_blank(const char *string)
{
    // variable to keep track of whitespace characters of the user input
    int whitespaces = 0;

    // length of the user input
    int len = strlen(string);

    // counting the number of whitespaces in the input
    for (int i=0; i<len; i++)
    {
        if (isspace(string[i]))
        {
            whitespaces++;
        }
    }

    // returnining true if user input is blank line
    return (whitespaces == len);
}



// returns true if the user input is larger than the buffer size - 2
bool is_invalid_size(const char *string)
{
    return (string[strlen(string) - 1] != '\n');
}
