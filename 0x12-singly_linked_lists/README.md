This directory contains functions that display and munipulate linked lists.

A singly linked list is a type of data structure in computer science used to store and organize a collection of elements, also known as nodes. Each node in a singly linked list contains two fields, one to hold the data and the other to point to the next node in the list. The first node in the list is called the head node and the last node is called the tail node. Singly linked lists are called "singly" because they only allow traversal in one direction, from the head to the tail. They can be used to implement various abstract data types, such as stacks, queues, and associative arrays, as well as in graph algorithms, file processing, and other applications.

Data structure used 
```
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```

Compilation 

gcc Wall -Werror -Wextra -pedantic -std=gnu89
