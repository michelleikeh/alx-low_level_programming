# C - More malloc, free
This project was done in fulfilment of the study requirements for ALX SE Full Stack Software Engineering programme.
In this project i improved on my knowledge and skills while working on C, doing momre work with malloc, vagrind and free.

## Technologies
* C files are compiled using `gcc'
* C files are written according to C89 standard
* C files are written according to Betty style
* Tested on Ubuntu 20.04 LTS

## Tests :heavy_check_mark:
* [tests](./tests): Folder of test files 

## Header File :file_folde:
* [main.h](./main.h): Header file containing prototypes for all functions written in this project.

## Files :file_folder:

All of the folowing files are written in C.

| Filename | Prototype | Description |
| ---------| --------- | ----------- |
| [0-malloc_checked.c](./0-malloc_checked.c) | `void *malloc_checked(unsigned int b);` | Allocates memory using `malloc` |
| [1-string_nconcat.c](./1-string_nconcat.c) | `char *string_nconcat(char *s1, char *s2, unsigned int n);` |Concatenates two strings |
| [2-calloc.c](./2-calloc.c) | `void *calloc(unsigned int nmemb, unsigned int size);` |Allocates memory for an array using `malloc` |
| [3-array_range.c](./3-array_range.c) | `int *array_range(int min, int max);` | Creates an array of integers |
| [100-realloc.c](./100-realloc.c) | `void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);` | Reallocates a memory block using `malloc ` and `free` |
| [101-mul.c](./101-mul.c) | ` ` | Multiples two positive numbers |
