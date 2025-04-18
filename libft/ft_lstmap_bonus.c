/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvapere <<alvapere@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 13:14:35 by alvapere          #+#    #+#             */
/*   Updated: 2025/04/18 13:38:40 by alvapere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Itera la lista ’lst’ y aplica la función ’f’ al
// contenido de cada nodo. Crea una lista resultante
// de la aplicación correcta y sucesiva de la función
// ’f’ sobre cada nodo. La función ’del’ se utiliza
// para eliminar el contenido de un nodo, si hace
// falta
/// @param lst : un puntero a un nodo.
/// @param f : la dirección de un puntero a una función usada
// en la iteración de cada elemento de la lista.
/// @param del del: un puntero a función utilizado para eliminar
// el contenido de un nodo, si es necesario.
/// @return La nueva lista.
// NULL si falla la reserva de memoria.

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list	*result;
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	result = NULL;
	while (lst)
	{
		tmp = ft_lstnew((*f)(lst->content));
		if (!tmp)
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, tmp);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (result);   
}