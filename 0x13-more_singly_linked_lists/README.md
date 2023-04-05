LINKED LISTS

A linked list is a linear data structure that consists of a sequence of nodes. Each node contains two fields
The data and the pointer to the next node in the sequence.

Data structure used:

```
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```
