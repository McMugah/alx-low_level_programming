#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
unsigned int soup;
char *o;
soup = 1;
o = (char *) & soup;
return ((int)*o);
}
