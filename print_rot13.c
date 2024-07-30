#include "main.h"
/**
 * print_rot13 - convertin to rot13
 * @args:The argument to be printed
 * Return:The len of the string
 */
int print_rot13(va_list args)
{
int i, j, counter = 0;
int k = 0;
char *s = va_arg(args, char*);
char al[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
char bl[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

if (s == NULL)
s = "(null)";
for (i = 0; s[i]; i++)
{
k = 0;
for (j = 0; al[j] && !k; j++)
{
if (s[i] == al[j])
{
_putchar(bl[j]);
counter++;
k = 1;
}
}
if (!k)
{
_putchar(s[i]);
counter++;
}
}
return (counter);
}
