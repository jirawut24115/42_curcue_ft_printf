/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichompo <jichompo@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:24:50 by jichompo          #+#    #+#             */
/*   Updated: 2024/02/18 06:16:17 by jichompo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hex_ptr(char *base, unsigned long long n, int result)
{
	unsigned long long	b;

	b = ft_strlen(base);
	if (n >= b)
	{
		result = hex_ptr(base, n / b, result);
		write (1, &base[n % b], 1);
		result++;
	}
	else if (n < b)
	{
		if (write (1, &base[n], 1) == -1)
			return (-1);
		result++;
	}
	return (result);
}

int	ft_print_ptr(void *p)
{
	unsigned long long	ptr;
	int					result;

	result = 0;
	ptr = (unsigned long long)p;
	if (!p)
	{
		result += write (1, "(nil)", 5);
		return (result);
	}
	result += write(1, "0x", 2);
	result = hex_ptr(HEX, ptr, result);
	return (result);
}

int	ft_print_hex(unsigned int num, char x)
{
	int		result;

	result = 0;
	if (x == 'x')
		result = hex_ptr(HEX, num, result);
	else
		result = hex_ptr(HEX_CAP, num, result);
	return (result);
}
