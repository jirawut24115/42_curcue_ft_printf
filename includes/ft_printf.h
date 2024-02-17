/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichompo <jichompo@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:11:32 by jichompo          #+#    #+#             */
/*   Updated: 2024/02/17 17:18:13 by jichompo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# define HEX "0123456789abcdef"
# define HEX_CAP "0123456789ABCDEF"

char	*ft_itoa_base(int num, int base);
int		ft_putstr(char *s);
int		ft_print_num(int num);
int		ft_print_hex(unsigned int num, char x);
int		ft_putchar(int c);
int		ft_print_unsigned_num(unsigned int num);
int		ft_strlen(char *s);
int		ft_print_ptr(void *p);
int		ft_printf(const char *s, ...);
void	ft_toupper(char *s);

#endif
