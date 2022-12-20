/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:19:22 by smuhamma          #+#    #+#             */
/*   Updated: 2022/12/14 19:49:01 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(char c, va_list lst)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(lst, int));
	else if (c == 'X')
		len += print_hexacap(va_arg(lst, unsigned int));
	else if (c == 'x')
		len += print_hexalow(va_arg(lst, unsigned int));
	else if (c == 's')
		len += ft_putstr(va_arg(lst, char *));
	else if (c == 'p')
		len += print_pointer(va_arg(lst, unsigned long));
	else if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(lst, int));
	else if (c == 'u')
		len += print_unint(va_arg(lst, unsigned int));
	else if (c == '%')
		len += ft_putchar(c);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	lst;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(lst, str);
	while (str[i])
	{
		if (str[i] == '%')
			len += ft_check(str[++i], lst);
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(lst);
	return (len);
}
