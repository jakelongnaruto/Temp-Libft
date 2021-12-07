/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 21:21:39 by lonnguye          #+#    #+#             */
/*   Updated: 2021/12/05 18:15:24 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a copy of the string given as 
** argument without whitespaces at the beginning or at the end of the string. 
** Will be considered as whitespaces the following characters 
** ’ ’, ’\n’ and ’\t’. If s has no whites- paces at the beginning or at the end,
** the function returns a copy of s. If the allocation fails the function 
** returns NULL.
** Param 1: The string to be trimmed.
** Return value: The "fresh" trimmed string or a copy of s.
*/

static int	ft_is_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] && ft_is_space(s[i]))
	{
		i++;
	}
	j = ft_strlen(s) - 1;
	while (s[j] && ft_is_space(s[j]))
	{
		j--;
	}
	if (j < i)
		return ("");
	str = ft_memalloc(j - i + 2);
	if (str == NULL)
		return (NULL);
	str = ft_strncpy(str, s + i, j - i + 1);
	return (str);
}
