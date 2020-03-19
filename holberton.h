#ifndef holberton_h
#define holberton_h
#include <stdarg.h>

int _putchar(char c);

int _printf(const char *format, ...);

int put_c(va_list argf);

int put_s(va_list argf);

int put_i(va_list argf);

int put_n(va_list argf);

/**
 *forms - forms 
 *@x: character type
 *@fn: function
 */
typedef struct forms
{
char x;
int (*fn)(va_list argf);
}
forms;

#endif
