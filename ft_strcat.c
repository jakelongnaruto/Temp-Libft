/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:18:26 by lonnguye          #+#    #+#             */
/*   Updated: 2021/12/03 12:58:21 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** append a copy of the null-ter-minated string s2 to the end of the 
** null-terminated string s1, then add a terminating `\0'.  The string s1 
** must have sufficient space to hold the result.
*/

char	*ft_strcat(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	while (*src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
