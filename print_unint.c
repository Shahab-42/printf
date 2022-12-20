/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:31:54 by smuhamma          #+#    #+#             */
/*   Updated: 2022/12/14 19:37:38 by smuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unint(unsigned int n)
{
	int	len;

	len = 0;
	if (n > 9)
		len += print_unint(n / 10);
	len += ft_putchar((n % 10) + '0');
	return (len);
}
