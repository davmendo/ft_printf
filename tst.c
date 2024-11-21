#include "ft_printf.h"
/*
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
*/

int main(void)
{
    int a = 42;
    void *ptr = &a;
    void *null_ptr = NULL;

    // Teste com ponteiro não nulo
    int ft_printed = ft_printf("Endereço de memória com ft_printf: %p\n", ptr);
    ft_printf("Caracteres impressos (ft_printf): %d\n\n", ft_printed);

    int printf_printed = printf("Endereço de memória com printf: %p\n", ptr);
    printf("Caracteres impressos (printf original): %d\n\n", printf_printed);

    // Teste com ponteiro nulo
    ft_printed = ft_printf("Ponteiro nulo com ft_printf: %p\n", null_ptr);
    ft_printf("Caracteres impressos (ft_printf): %d\n\n", ft_printed);

    printf_printed = printf("Ponteiro nulo com printf: %p\n", null_ptr);
    printf("Caracteres impressos (printf original): %d\n\n", printf_printed);

    return 0;
}
