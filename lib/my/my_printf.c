/*
** EPITECH PROJECT, 2022
** my_printf.c
** File description:
** prints whatever you want
*/

#include "my_printf.h"
#include <stdarg.h>

void	print_init(int (*printmy[128])(va_list *, int, char))
{
  int	i;

  i = -1;
  while (++i <= 127)
    {
      printmy[i] = &showtime;
    }
  printmy['c'] = &print_char;
  printmy['s'] = &print_str;
  printmy['d'] = &print_int;
  printmy['i'] = &print_int;
  printmy['%'] = &print_percent;
}

int	my_printf(const char *str, ...)
{
  int		i;
  int		n;
  va_list	ap;
  int		(*printmy[128])(va_list *, int, char);

  print_init(printmy);
  i = -1;
  va_start(ap, str);
  while (str[++i] != '\0')
    {
      if (str[i] == '%')
	{
	  ++i;
	  n = printmy[str[i]](&ap, n, str[i]);
	}
      else
	n += write(1, &str[i], 1);
    }
  va_end(ap);
  return (n);
}
