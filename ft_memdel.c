/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:21:27 by lonnguye          #+#    #+#             */
/*   Updated: 2021/11/14 17:35:58 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes as a parameter the address of a memory area that needs to be freed with 
free(3), then puts the pointer to NULL.
** Param 1: A pointer’s address that needs its memory freed and set to NULL.
** Return value: None.
** Jake's note: free everything and set to null 
*/

void	ft_memdel(void **ap)
{
	if (!ap || !*ap)
		return ;
	free(*ap);
	*ap = NULL;
}
