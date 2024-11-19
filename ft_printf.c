#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list args;
    int     printed;
    int     i;

    va_start(args, format);
    printed = 0;
    i = 0;
    while (format[i])
    {
        if (format[i] == '%' && format[i + 1])
        {
            i++;
            if (format[i] == 'c')
                printed += ft_putchar(va_arg(args, int));
            else if (format[i] == 's')
                printed += ft_putstr(va_arg(args, char *));
            else if (format[i] == 'p')
                printed += ft_putptr(va_arg(args, void *));
            else if (format[i] == 'd' || format[i] == 'i')
                printed += ft_putnbr(va_arg(args, int));
            else if (format[i] == 'u')
                printed += ft_putnbr_unsigned(va_arg(args, unsigned int));
            else if (format[i] == 'x' || format[i] == 'X')
                printed += ft_puthex(va_arg(args, unsigned int), format[i]);
            else if (format[i] == '%')
                printed += ft_putchar('%');
        }
        else
            printed += ft_putchar(format[i]);
        i++;
    }
    va_end(args);
    return (printed);
}
