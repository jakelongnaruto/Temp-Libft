/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 17:31:25 by lonnguye          #+#    #+#             */
/*   Updated: 2021/12/03 13:06:48 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes as a parameter the address of a string that need to be freed with 
** free(3), then sets its pointer to NULL.
** Param 1: The string’s address that needs to be freed and 
** its pointer set to NULL.
** Return value: None.
** Jake's note: same as ft_memdel, but string.
*/

void	ft_strdel(char **as)
{
	if (!as || !*as)
		return ;
	free(*as);
	*as = NULL;
}
