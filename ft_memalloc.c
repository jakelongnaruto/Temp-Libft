/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:04:07 by lonnguye          #+#    #+#             */
/*   Updated: 2021/12/03 13:04:41 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a “fresh” memory area. The memory 
** allocated is initialized to 0. If the alloca- tion fails, 
** the function returns NULL.
** Param 1: The size of the memory that needs to be allocated. 
** Return value: The allocated memory area.
*/

void	*ft_memalloc(size_t size)
{
	void	*str;

	str = (void *)malloc(size);
	if (str == NULL)
		return (NULL);
	ft_memset(str, 0, size);
	return (str);
}
