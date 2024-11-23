/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:14:38 by davmendo          #+#    #+#             */
/*   Updated: 2024/11/21 18:15:19 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int	printed;

	if (ptr == NULL)
	{
		return (ft_putstr("(nil)"));
	}
	printed = ft_putstr("0x");
	printed += ft_puthex((unsigned long)ptr, 'x');
	return (printed);
}
