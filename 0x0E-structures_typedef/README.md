This directory contains header files, and function files that are about Structures in C. Header file main.h contains predefined functions used is some programs.

dog.h defines a structure in C thats has members about dogs

1-init_dog.c is a function that initializes a variable of type stuct dog

2-print_dog is a function that prints struct dog whereby If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil)). And if dd is NULL nothing is printed.

dog.h a new type is defined from the first one, dog_t is new name for type struct dog

4-new_dog.c is a function that creates a new dog with member details define in dog_t

5-free_dog.c is a function that uses memory deallocation to free all defined memory of the struct, freeing the dogs.
