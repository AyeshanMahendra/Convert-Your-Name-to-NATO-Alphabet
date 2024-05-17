# Convert Your Name to NATO Phonetic Alphabet

### Video Demo:  [Convert Your Name to NATO Phonetic Alphabet](https://youtu.be/OvkWn6Id9d4)
>
### Description:

#### Project Overview:
Have you ever been in a phone call where you had to spell out your name, and you came with random words for each letter of your name confusing both yourself and the person on the other sided of the line? Well I have! Several times, actually!
To address this problem, I designed a program in C to take user's name as an input and then prints out the NATO phonetic alphabet word associated with each letter of the name.

 > IMPORTANT NOTES:
>* This program limits the length of the user input to a pre-defined length.
>* Although it does not reject non-alphabetic characters as the input, it only spell out english alphabetic characters.
>* If the user inputs a name longer than 39 characters program prompt the user to enter a shorter name.
>* If the user inputs a blank line for the input, the program prompt the user to enter a valid name.

>
#### File Descriptions:
Following files are included in the nate_phonetic_alphabet
* [get_name.c](#get_namec)
* [Makefile](#makefile)
* [nato_phone](#nato_phone)
* [nato_phone.c](#nato_phonec)
* [natoaux.h](#natoauxh)
* [README.md](#readmemd)
* [reference.txt](#referencetxt)
* [spell_out.c](#spell_outc)

##### **get_name.c**

This file contains function definitions of:
- [get_name function](#get_name-function)
- [is_blank function](#is_blank-function)
- [is_invalid_size function](#is_invalid_size-function)

##### **Makefile**

This file contains the clang compilation code.

##### **nato_phone**

This is the executable file of the project.

##### **nato_phone.c**

This is the main file of the project and it contains the main function.

##### **natoaux.h**

This is the custom library I made for my project. It contains the function declaration of all the custom functions that are used in this project.

##### **README.md**

This is the readme file.

##### **reference.txt**

Contains the references.

##### **spell_out.c**

This file contains the function definition for the [spell_out function](#spell_out-function).

>
#### Function Descriptions:

##### **main function**

In the main function, memory is dynamically allocated to store the user name. Then the get_name function is called to get the user's name. Then the spell_out function is called to print each letter of the user's name followed by the NATO phonetic word associated with that alphabetic character. Finally it free the dynamically allocated memory.

##### **get_name function**

I wanted to implement my own version of get_string used with cs50 library. This is my version of it. This function get the user input and store it as a string at the given buffer location. It will only accept up to (given buffer size - 2) characters. It will re-prompt the user for input when either the user input is larger than the accepted length (given buffer size - 2) or when the user input is a blank entry. This function does not reject any non-alphabetic characters.

##### **is_blank function**

This function returns "true" if the user input is a blank line.

##### **is_invalid_size function**

This function returns "true" if the user input is larger than the buffer size - 2.

##### **spell_out function**

This function prints each letter of the name followed by the NATO phonetic word associated with that alphabetic character. If there is a space in between names a blank line will be printed. All the other non-alphabetic characters will be printed as themselves. Unfortunately I did not implement this function to spell out other characters such as "-" or accents.

>
#### Design Choices:

* To make the main file (nato_phone) and the main function more readable and clean, I implemented a custom library to include all the custom functions.
* Similarly, to enhance readability and maintain a clean code structure, I divided the code into two separate files: one for the get_name function and its associated functions, and another for the spell_out function.
* I wanted to challenge myself by not using the cs50 library, therefor I had to implement my version of get_string to get a string input.
* Although, I wanted to be inclusive of all names out there in the world, in order keep the array that is used in the spell_out function, I sticked only to the standard 26 alphabetic characters.



>
#### References:
>* Getting the string input from the user
    >   - https://www.w3schools.com/c/c_user_input.php
>* Removing the trailing "\n" from gets() input -
    >   - https://www.geeksforgeeks.org/removing-trailing-newline-character-from-fgets-input/
>* Implementing a function to return a string -
    >   - https://www.youtube.com/watch?v=033DXBYql8w&ab_channel=PortfolioCourses
>* Clearing the stdin buffer -
    >   - https://www.youtube.com/watch?v=N7-MueK2CX8&ab_channel=PortfolioCourses
>* NATO phonetic alphabet source -
    >   - https://www.worldometers.info/languages/nato-phonetic-alphabet/
>* Creating a custom library -
    >   - https://www.youtube.com/watch?v=x8gsHFBW7zY&ab_channel=PortfolioCourses
    >   - https://www.youtube.com/watch?v=pF1_fXz5zN0&ab_channel=PortfolioCourses
    >   - https://www.youtube.com/watch?v=yWLkyN_Satk&ab_channel=NeuralNine
    >   - Makefile code was adapted from CS50Sx 2023 - Problem set 5 - Speller
        >        - https://cs50.harvard.edu/x/2023/psets/5/speller/
