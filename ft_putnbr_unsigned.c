/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:12:42 by davmendo          #+#    #+#             */
/*   Updated: 2024/11/21 18:13:09 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n)
{
	int	printed;

	printed = 0;
	if (n > 9)
		printed += ft_putnbr_unsigned(n / 10);
	printed += ft_putchar((n % 10) + '0');
	return (printed);
}
