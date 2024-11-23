/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:07:53 by davmendo          #+#    #+#             */
/*   Updated: 2024/11/21 20:13:47 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long n, char format)
{
	int		printed;
	char	*base;

	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	printed = 0;
	if (n >= 16)
		printed = printed + ft_puthex(n / 16, format);
	printed = printed + ft_putchar(base[n % 16]);
	return (printed);
}
