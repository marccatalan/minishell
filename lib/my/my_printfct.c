/*
** EPITECH PROJECT, 2022
** my_printfct.c
** File description:
** my_printf functions
*/

#include "my_printf.h"
#include "my.h"

int	print_char(va_list *ap, int n, char c)
{
  int	i;

  i = va_arg(*ap, int);
  n += write(1, &i, 1);
  return (n);
}

int	print_str(va_list *ap, int n, char c)
{
  char	*str;

  str = va_arg(*ap, char *);
  n += write(1, str, my_strlen(str));
  return (n);
}

int	print_int(va_list *ap, int n, char c)
{
  int	nb;

  nb = va_arg(*ap, int);
  if (nb < 0)
    {
      n += write(1, "-", 1);
      nb = - nb;
    }
  if (nb / 10 > 0)
    {
      my_put_nbr(nb / 10);
      my_put_nbr(nb % 10);
    }
  else
    {
      nb += 48;
      n += write(1, &nb, 1);
    }
  return (n);
}

int	print_percent(va_list *ap, int n, char c)
{
  n += write(1, "%", 1);
  return (n);
}

int	showtime(va_list *ap, int n, char c)
{
  n += write(1, "%", 1);
  n += write(1, &c, 1);
  return (n);
}
