0x09. C - Static Libraries
Description

In this project, we will learn what static libraries are, how they work, and how to create and use them in C programs. We will create a static library containing various functions we've created in previous projects.
Requirements

    All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic
    The code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
    No global variables are allowed
    The code must include a README.md file at the root of the folder of the project
    The first line of all your files should be exactly #!/bin/bash
    A header file named main.h is required which should contain all the function prototypes used in the program
    The library should be created using the following command: ar -rc libname.a *.o. This creates a library called libname.a from all the .o files in the directory
    All functions must be in separate files and no more than 5 functions should be in one file
    The code must not use the standard library. Functions like printf, puts, etc. are forbidden. However, _putchar is allowed
    All files should end with a new line
    All files must be executable

Files

    main.h: Header file containing all function prototypes used in the program
    libmy.a: Static library containing all functions listed below
    _putchar.c: Function that writes a character to stdout
    0-isupper.c: Function that checks for an uppercase letter
    0-memset.c: Function that fills memory with a constant byte
    0-strcat.c: Function that concatenates two strings
    1-isdigit.c: Function that checks for a digit (0 through 9)
    1-memcpy.c: Function that copies memory area
    1-strncat.c: Function that concatenates two strings
    100-atoi.c: Function that converts a string to an integer
    2-strchr.c: Function that locates a character in a string
    2-strlen.c: Function that calculates the length of a string
    2-strncpy.c: Function that copies a string
    3-islower.c: Function that checks for a lowercase letter
    3-puts.c: Function that prints a string to stdout
    3-strcmp.c: Function that compares two strings
    3-strspn.c: Function that calculates the length of a prefix substring
    4-isalpha.c: Function that checks for an alphabetic character
    4-strpbrk.c: Function that searches a string for any of a set of bytes
    5-strstr.c: Function that locates a substring
    6-abs.c: Function that computes the absolute value of an integer
    9-strcpy.c: Function that copies the string pointed to by src to the buffer pointed to by dest

Function Descriptions

    int _putchar(char c): Function that writes a character to stdout
    int _isupper(int c): Function that checks for an uppercase letter
    int _isdigit(int c): Function that checks for a digit (0 through 9)
    int _strlen(char *s): Function that calculates the length of a string
    `void _puts(char *


