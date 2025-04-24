/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <<alvapere@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:52:47 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/24 12:10:04 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

int ft_ptint_string(char *str)
{
    int i;

    i = 0;
    
    if (str == 0)
        return (ft_ptint_string("(NULL)"));
        
    while (str[i] != '\0')
    {
        i = ft_print_char(str[i]);
        i++;
    }
    return (i);
}