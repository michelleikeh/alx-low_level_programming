# C - Function Pointers
This project is geared towards understanding the following objectives
* What are function pointers and how to use them
* What does a function pointer exactly hold
* Where does a function pointer point to in the virtual memory
## Technologies
* C files are compiled using `gcc 9.4.0`
* C files are written according to C89 standard
* C files are written according to `Betty` styling format
* Tested on Ubuntu 20.04 LTS

## Header Files :file_folder:
* [function_pointers.h](./function_pointers.h) : Header files containing prototype for task 0 - 2 of this project.
* [3-calc.h](./3-calc.h) : Header file containing prototype for task 3.
## Files :file_folder:
All of the following files are programs written in C.
| Filename | Prototype | Description |
|---------| ----------| ------------|
| 0-print_name.c | `void print_name(Char *name, void(*f)(char *)); | prints a name |
| 1-array_iterator | `void array_iterator(int *array, size_t size, void (*action)(int)); | iterates an array |
| 2-int_indec.c | `int int_index(int *array, int size, int (*cmp)(int)); | searches for an integer
|
| 3-op_functions.c |   | file that contains arithmetic calculations |
| 3-get_op_function.c |  | pointer of the arithmetic function|
| 3-main.c | | code entry point |
| 100-main_opcodes.c | | Prints the opcodes of its own main function |
