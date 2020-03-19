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
 * struct forms - forms
 * @x: character type
 * @fn: function
 * Description: empty
 */
typedef struct forms
{
char x;
int (*fn)(va_list argf);
}
forms;
int struu(const char *format, int y, va_list argf);
#endif
