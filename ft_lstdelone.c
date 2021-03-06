/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:36:15 by lonnguye          #+#    #+#             */
/*   Updated: 2021/11/30 16:57:00 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes as a parameter a link’s pointer address and frees the memory of the
** link’s content using the function del given as a parameter, then frees the 
** link’s memory using free(3). The memory of next must not be freed under any 
** circumstance. Finally, the pointer to the link that was just freed must be 
** set to NULL (quite similar to the function ft_memdel in the mandatory part).
** Param 1: The adress of a pointer to a link that needs to be freed.
** Return value: NONE
*/

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (del)
	{
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = NULL;
	}
}
