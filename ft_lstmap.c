/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 23:43:47 by lonnguye          #+#    #+#             */
/*   Updated: 2021/12/07 01:09:53 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Iterates a list lst and applies the function f to each link to create 
** a “fresh” list (using malloc(3)) resulting from the suc- cessive 
** applications of f. If the allocation fails, the function returns NULL.
** Param 1: A pointer’s to the first link of a list.
** Param 2: The address of a function to apply to each link of a list.
** Return value: the new list.
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	else
	{
		new = f(lst);
		new->next = ft_lstmap(lst->next, f);
		return (new);
	}
}
