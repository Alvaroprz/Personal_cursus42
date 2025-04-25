/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:52:47 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/25 13:24:59 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *str)
{
	int	i;

	i = 0;

	if (str == 0)
		return (ft_print_string("(NULL)"));

	while (str[i] != '\0')
	{
		i = ft_print_char(str[i]);
		i++;
	}
	return (i);
}

int	ft_print_number(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i += ft_print_char('0');
	if (n == -2147483648)
	{
		i += ft_print_string("-2147483648");
		return (i);
	}
	if (n < 0)
	{
		i += ft_print_char('-');
		n = -n;
	}
	if (n > 0)
		i += ft_print_unsigned((unsigned)n);
	return (i);
}

int	ft_print_unsigned(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i += ft_print_char('0');
	if (n / 10 != 0)
		i += ft_print_unsigned(n / 10);
	i += ft_print_char((n % 10) + '0');
	return (i);
}
