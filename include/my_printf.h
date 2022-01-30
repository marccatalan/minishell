
#ifndef MYPRINTF_H_
#define MYPRINTF_H_
#include "my.h"
#include <unistd.h>
#include <stdarg.h>

int	print_percent(va_list *ap, int n, char c);
int	print_str(va_list *ap, int n, char c);
int	print_char(va_list *ap, int n, char c);
int	print_int(va_list *ap, int n, char c);
int	showtime(va_list *ap, int n, char c);

#endif
