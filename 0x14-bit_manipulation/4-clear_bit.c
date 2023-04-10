#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0.
 * at a given index.
 * pointer of an unsigned long int.
 * index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int capacity;
if (index > 63)
return (-1);
capacity = 1 << index;
if (*n & capacity)
*n ^= capacity;
return (1);
}
