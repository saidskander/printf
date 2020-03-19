#ifndef holberton_h
#define holberton_h
#include <stdarg.h>

int _putchar(char c);

int _printf(const char *format, ...);

int print_c(va_list argf);

int print_s(va_list argf);

int print_h(va_list argf);

int print_n(va_list argf);

int print_ex (va_list argf);

/**
 * struct forms - forms
 * @x: character type
 * @fn: function
 * Description: empty
 */
typedef struct forms_t
{
char x;
int (*fn)(va_list argf);
}
forms_t;
int st(const char *format, int y, va_list argf);
#endif
