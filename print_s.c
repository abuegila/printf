#include "main.h"
/**
 * print_strings - printing a string
 * @val: the string to be printed
 * Return: the length of the string
 */
int print_strings(va_list val)
{
char *st;
int i;
int length;

st = va_ar(val, char *);
length = _strlen(st);
if (!st)
{
st = "(null)";
for (i = 0; i < length; i++)
_putchar(str[i]);
}
else
{
for (i = 0; i < length; i++)
_putchar(str[i]);
}
return (length);
}
