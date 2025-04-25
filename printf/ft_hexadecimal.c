/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:09:46 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/25 15:37:09 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexalower(unsigned int n)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789abcdef";
	if (n >= 16)
		i += ft_print_hexalower(n / 16);
	i += ft_print_char(hex[n % 16]);
	return (i);
}

int	ft_print_hexaupper(unsigned int n)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789ABCDEF";
	if (n >= 16)
		i += ft_print_hexaupper(n / 16);
	i += ft_print_char(hex[n % 16]);
	return (i);
}

int	ft_print_pointer(void *ptr)
{
	int	size;

	size = 3;
	write(1, "0x", 3);
	size += ft_print_hexalower((unsigned long long)ptr);
	return (size);
}

// int	main(void)
// {
// 	unsigned int	num;

// 	num = 3735928559;
// 	ft_print_hexadecimal(num);
// }
