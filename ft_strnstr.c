/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:46:56 by lonnguye          #+#    #+#             */
/*   Updated: 2021/12/07 14:15:48 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strnstr() function locates the first occurrence of the null-terminated
** string needle in the string haystack, where not more than len characters are
** searched.  Characters that appear after a `\0' character are not searched.
** If needle is an empty string, haystack is returned; if needle occurs nowhere
** in haystack, NULL is returned; otherwise a pointer to the first character of
** the first occurrence of needle is returned.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	anchor;
	size_t	i;

	anchor = 0;
	if (!needle[0])
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	while (haystack[anchor] && anchor < len)
	{
		i = 0;
		while (haystack[anchor + i] == needle[i] && needle[i])
			i++;
		if (!needle[i] && (anchor + i) <= len)
			return ((char *)&haystack[anchor]);
		anchor++;
	}
	return (NULL);
}
