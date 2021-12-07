/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:34:09 by lonnguye          #+#    #+#             */
/*   Updated: 2021/12/03 13:10:08 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a “fresh” substring from the string 
** given as argument. The substring begins at indexstart and is of size len. 
** If start and len aren’t refer- ing to a valid substring, the behavior 
** is undefined. 
** If the allocation fails, the function returns NULL.
** Param 1: The string from which create the substring.
** Param 2: The start index of the substring.
** Param 3: The size of the substring.
** Return value: The substring.
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;

	str = ft_memalloc(len + 1);
	if (!s || !str)
		return (NULL);
	str = ft_memcpy(str, s + start, len);
	return (str);
}
