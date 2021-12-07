/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 20:29:21 by lonnguye          #+#    #+#             */
/*   Updated: 2021/12/02 22:50:50 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes as a parameter the adress of a pointer to a link and frees the memory 
** of this link and every successors of that link using the functions del and 
** free(3). Finally the pointer to the link that was just freed must be set 
** to NULL (quite similar to the function ft_memdel from the mandatory part).
** Param 1: The address of a pointer to the first link of a list that needs 
** to be freed.
** Return value: None
*/

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*a;
	t_list	*b;

	if (!*alst || !alst || !del)
		return ;
	a = *alst;
	while (a)
	{
		b = a->next;
		del(a->content, a->content_size);
		free(a);
		a = b;
	}
	*alst = NULL;
}
