#include "ft_printf.h"

int ft_putptr(unsigned long nb)
{
 int   re;
 char  *base;

 re = 0;
 base = "0123456789abcdef";
 if (nb >= 16)
 {
    re += ft_putptr(nb / 16);
    re += ft_putptr(nb % 16);
 }
 else
    re += ft_putchar(base[nb % 16]);
 return (re);
}
/*
int ft_putptr(void *ptr)
{
    unsigned long long addr;
    int printed;

    printed = 0;
    addr = (unsigned long long)ptr;
    printed += ft_putstr("0x");
    if (addr == 0)
    {
        printed += ft_putchar('0');
    }
    else
    {
        char buffer[16];
        int i = 0;

        while (addr)
        {
            buffer[i++] = "0123456789abcdef"[addr % 16];
            addr /= 16;
        }

        while (i > 0)
            printed += ft_putchar(buffer[--i]);
    }
    return (printed);
}

int ft_putptr(void *ptr)
{
    unsigned long addr;
    int printed;

    printed = 0;
    addr = (unsigned long)ptr;
    printed += ft_putstr("0x");
    if (addr == 0)
        printed += ft_putchar('0');
    else
    {
        printed += ft_puthex(addr, 'x');
    }
    return (printed);
}


int ft_putptr(void *ptr)
{
    unsigned long long addr;
    int printed;

    printed = 0;
    addr = (unsigned long long)ptr;
    printed += ft_putstr("0x");
    if (addr == 0)
        printed += ft_putchar('0');
    else
    {
        char buffer[16];
        int i = 15;

        while (addr != 0)
        {
            buffer[i--] = "0123456789abcdef"[addr % 16];
            addr /= 16;
        }

        while (++i < 16)
            printed += ft_putchar(buffer[i]);
    }
    return (printed);
}
*/
