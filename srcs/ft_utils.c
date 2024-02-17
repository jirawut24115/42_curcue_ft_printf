/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichompo <jichompo@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:21:29 by jichompo          #+#    #+#             */
/*   Updated: 2024/02/17 17:09:04 by jichompo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	result;

	result = 0;
	if (!s)
		return (0);
	while (*s)
	{
		result += write (1, s, 1);
		s++;
	}
	return (result);
}

void	ft_toupper(char *s)
{
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
}

int	ft_strlen(char *s)
{
	int	result;

	result = 0;
	while (*s)
	{
		result++;
		s++;
	}
	return (result);
}
