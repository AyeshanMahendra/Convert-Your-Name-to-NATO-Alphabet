// This library declare the functionality of following functions
    // is_blank function
    // is_invalid_size function
    // get_name function
    // spell_out function

#ifndef NATOAUX_H
#define NATOAUX_H

#include <stdbool.h>

// Maximum length of characters that the user can input + 2
#define MAX_LENGTH 41

// Function prototypes
bool is_blank(const char *string);
bool is_invalid_size(const char *string);
void get_name(char *buffer);
void spell_out(const char *name);

#endif
