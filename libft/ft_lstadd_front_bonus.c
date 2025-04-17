/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:23:30 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/17 13:40:08 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Añade el nodo ’new’ al principio de la lista ’lst’
/// @param lst :la dirección de un puntero al primer nodo de una lista.
/// @param new : un puntero al nodo que añadir al principio de la lista.
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*aux;

	aux = lst[0];
	new->next = aux;
	lst[0] = new;
}
