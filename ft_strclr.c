/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 17:41:26 by lonnguye          #+#    #+#             */
/*   Updated: 2021/11/14 18:30:16 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Sets every character of the string to the value ’\0’. 
** Param 1: The string that needs to be cleared.
** Return value: None.
** Jake's note: clear a string and fill with 0
*/

void	ft_strclr(char *s)
{
	if (s)
		ft_memset(s, 0, ft_strlen(s));
}
