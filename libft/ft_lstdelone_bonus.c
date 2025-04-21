/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <alvapere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 12:31:31 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/21 11:18:09 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Toma como parámetro un nodo ’lst’ y libera la
// memoria del contenido utilizando la función ’del’
// dada como parámetro, además de liberar el nodo. La
// memoria de ’next’ no debe liberarse.
/// @param lst el nodo a liberar.
/// @param del un puntero a la función utilizada para liberar
// el contenido del nodo.

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
