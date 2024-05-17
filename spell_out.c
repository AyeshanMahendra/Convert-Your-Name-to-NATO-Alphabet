/*
Implementing the spell_out function
    - This function will print the NATO phonetic words associated with the alphabetic characters
    - A space in between names will be printed as a blank line
    - All the other non-alphabetic characters will be printed as is
    - Unfortunately this function will not spell out other characters such as "-" or accents
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "natoaux.h"


void spell_out(const char *name)
{
    #define ALPHABET_SIZE 26

    // an array that stores NATO phonetic words
    const char* NATO[ALPHABET_SIZE] = {"Alpha", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot", "Golf",
                                        "Hotel", "India", "Juliett", "Kilo", "Lima", "Mike", "November",
                                        "Oscar", "Papa", "Quebec", "Romeo", "Sierra", "Tango", "Uniform",
                                        "Victor", "Whiskey", "X-ray", "Yankee", "Zulu"};

    // Aesthetic purposes
    printf("****** NATO phonetics for your name ******\n\n");

    // iterating through each character of the name
    for (int i=0, n=strlen(name); i<n; i++)
    {
        // checking whether the character is alphabetic
        if (isalpha(name[i]))
        {
            // finding and printing the corresponding NATO phonetic word from the NATO array
            int index = (toupper(name[i]) - 65);
            printf("'%c' for '%s'\n", name[i], NATO[index]);
        }
        // printing a blank line if the character is a blank line
        else if (isspace(name[i]))
        {
            printf("\n");
        }
        // prinintg the non-alphabetic characters
        else
        {
            printf("%c\n", name[i]);
        }
    }
    // Aesthetic purposes
    printf("\n");
}
