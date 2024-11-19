// main.c
#include "ft_printf.h"
#include <stdio.h> 

int main(void)
{
    int printed_chars;

    printed_chars = ft_printf("Caractere: %c\n", 'A');
    ft_printf("Caracteres impressos (ft_printf): %d\n", printed_chars);
    printed_chars = printf("Caractere: %c\n", 'A');
    printf("Caracteres impressos (printf original): %d\n\n", printed_chars);
    
    printed_chars = ft_printf("String: %s\n", "Hello World");
    ft_printf("Caracteres impressos (ft_printf): %d\n", printed_chars);
    printed_chars = printf("String: %s\n", "Hello World");
    printf("Caracteres impressos (printf original): %d\n\n", printed_chars);

    
    printed_chars = ft_printf("Ponteiro: %p\n", &printed_chars);
    ft_printf("Caracteres impressos (ft_printf): %d\n", printed_chars);
    printed_chars = printf("Ponteiro: %p\n", &printed_chars);
    printf("Caracteres impressos (printf original): %d\n\n", printed_chars);

    
    printed_chars = ft_printf("Número decimal: %d\n", 12345);
    ft_printf("Caracteres impressos (ft_printf): %d\n", printed_chars);
    printed_chars = printf("Número decimal: %d\n", 12345);
    printf("Caracteres impressos (printf original): %d\n\n", printed_chars);

    
    printed_chars = ft_printf("Número sem sinal: %u\n", 12345U);
    ft_printf("Caracteres impressos (ft_printf): %d\n", printed_chars);
    printed_chars = printf("Número sem sinal: %u\n", 12345U);
    printf("Caracteres impressos (printf original): %d\n\n", printed_chars);

    
    printed_chars = ft_printf("Hexadecimal (minúsculas): %x\n", 255);
    ft_printf("Caracteres impressos (ft_printf): %d\n", printed_chars);
    printed_chars = printf("Hexadecimal (minúsculas): %x\n", 255);
    printf("Caracteres impressos (printf original): %d\n\n", printed_chars);

    
    printed_chars = ft_printf("Hexadecimal (maiúsculas): %X\n", 255);
    ft_printf("Caracteres impressos (ft_printf): %d\n", printed_chars);
    printed_chars = printf("Hexadecimal (maiúsculas): %X\n", 255);
    printf("Caracteres impressos (printf original): %d\n\n", printed_chars);

    
    printed_chars = ft_printf("Porcentagem: %%\n");
    ft_printf("Caracteres impressos (ft_printf): %d\n", printed_chars);
    printed_chars = printf("Porcentagem: %%\n");
    printf("Caracteres impressos (printf original): %d\n\n", printed_chars);

    return 0;
}

