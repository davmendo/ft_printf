#include "ft_printf.h"

int ft_putptr(void *ptr)
{
    int printed;

    if (ptr == NULL)
    {
        // Imprime `(nil)` quando o ponteiro é NULL
        return (ft_putstr("(nil)"));
    }
    
    // Imprime "0x" para um ponteiro válido
    printed = ft_putstr("0x");

    // Chama `ft_puthex` para imprimir o valor hexadecimal do ponteiro
    // Usa unsigned long para garantir a precisão
    printed += ft_puthex((unsigned long)ptr, 'x');

    return (printed);
}

/*
int ft_putptr(void *ptr)
{
    unsigned long long addr;
    int printed;

    printed = 0;
    if (ptr == NULL)
    {
        return (ft_putstr("(nil)"));
    }
    addr = (unsigned long long)ptr;
    printed += ft_putstr("0x");
    printed += ft_puthex(addr, 'x');
    return (printed);
}
*/
