#include "ft_printf.h"

int main(void)
{
    int a = 42;
    void *ptr = &a;

    // Teste ft_printf
    int ft_printed = ft_printf("Endereço de memória com ft_printf: %p\n", ptr);
    ft_printf("Caracteres impressos (ft_printf): %d\n\n", ft_printed);

    // Teste printf original
    int printf_printed = printf("Endereço de memória com printf: %p\n", ptr);
    printf("Caracteres impressos (printf original): %d\n\n", printf_printed);

    return 0;
}

