#include <stdarg.h>
#include <limits.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _printf - _printf
 * @format : char
 * Return: something
 */
int _printf(const char *format, ...)
{
int x = 0, count = 0;
char *ks;
int j;
va_list forms;
char k;
va_start(forms, format);
for (x = 0; format[x] != '\0'; x++)
{
if ((format[x] == '%') && (format[x + 1] == 'c'))
{
k = (char)va_arg(forms, int);
_putchar(k);
count++;
x++;
}
else if ((format[x] == '%') && (format[x + 1] == 's'))
{
ks = va_arg(forms, char*);
for (j = 0; ks[j] != '\0'; j++)
_putchar(ks[j]);
count = count + j;
x++;
}
else
{
_putchar(format[x]);
count++;
}
}
va_end(forms);
return (count);
}
