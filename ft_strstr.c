/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 00:30:35 by lonnguye          #+#    #+#             */
/*   Updated: 2021/12/07 14:38:31 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strstr() function locates the first occurrence of the 
** null-ter-minated string needle in the null-terminated string 
** haystack. If needle is an empty string, haystack is returned; 
** if needle occurs nowhere in haystack, NULL is returned; 
** otherwise a pointer to the first character of the first 
** occurrence of needle is returned.
*/

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	anchor;
	size_t	i;

	anchor = 0;
	if (!haystack[0] && !needle[0])
		return ((char *)haystack);
	while (haystack[anchor])
	{
		i = 0;
		while (needle[i] == haystack[anchor + i] && needle[i])
			i++;
		if (!needle[i])
			return ((char *)&haystack[anchor]);
		anchor++;
	}
	return (NULL);
}
