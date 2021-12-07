/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:58:51 by lonnguye          #+#    #+#             */
/*   Updated: 2021/12/06 12:52:30 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a “fresh” link. The variables content 
** and content_size of the new link are ini- tialized by copy of the parameters 
** of the function. If the pa- rameter content is nul, the variable content is 
** initialized to NULL and the variable content_size is initialized to 0 even 
** if the parameter content_size isn’t. The variable next is initialized to 
** NULL. If the allocation fails, the function returns NULL.
*/

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*link;

	link = (t_list *)malloc(sizeof(t_list));
	if (!link)
		return (NULL);
	if (content == NULL)
	{
		link->content = NULL;
		link->content_size = 0;
	}
	else
	{
		link->content = malloc(content_size);
		if (!(link->content))
		{
			free (link);
			return (NULL);
		}
		ft_memcpy(link->content, content, content_size);
		link->content_size = content_size;
	}
	link->next = NULL;
	return (link);
}
