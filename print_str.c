#include "main.h"
/**
 * _strlen - Getting the length of a string
 * @s:The string to be processed
 * Return:The length of the string
 */
int _strlen(char *s)
{
int c;

for (c = 0; s[c] != 0; c++)
;
return (c);
}
/**
 * _strlenc - Getting the length of a constant string
 * @s:The string to be processed
 * Return:The length of the string
 */
int _strlenc(const char *s)
{
int c;

for (c = 0; s[c] != 0; c++)
;
return (c);
}
