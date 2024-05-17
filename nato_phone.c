// This program will take user's name as an input and then prints the name with NATO phonetic alphabet words

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "natoaux.h"

int main(void)
{
    // dynamically allocating memory to store the name
    char *name = malloc(sizeof(char) * MAX_LENGTH);
    // exiting the program if memory can not be allocated
    if (name == NULL)
    {
        printf("Unable to allocate memory\n");
        return 1;
    }

    get_name(name);
    spell_out(name);

    // free the dynamically allocated memory
    free(name);

    return 0;
}
