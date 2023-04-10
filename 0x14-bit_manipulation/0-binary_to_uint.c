#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
int van;
unsigned int jan = 0;
if (!b)
return (0);
for (van= 0; b[van]; van++)
{
if (b[van] < '0' || b[van] > '1')
return (0);
jan = 2 * jan + (b[van] - '0');
}
return (jan);
}
