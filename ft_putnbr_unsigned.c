#include "ft_printf.h"

int ft_putnbr_unsigned(unsigned int n)
{
    int printed;

    printed = 0;
    if (n > 9)
        printed += ft_putnbr_unsigned(n / 10);
    printed += ft_putchar((n % 10) + '0');
    return (printed);
}
