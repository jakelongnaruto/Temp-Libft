/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:22:48 by lonnguye          #+#    #+#             */
/*   Updated: 2021/12/03 13:30:21 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**     The memccpy() function copies bytes from string src to string dst.
** If the char-acter c (as converted to an unsigned char) occurs in the 
** string src, the copystops and a pointer to the byte after the copy of c in 
** the string dst is returned. Otherwise, n bytes are copied, 
** and a NULL pointer is returned. The source and destination strings 
** should not overlap, as the behavior is unde-fined.
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		if (((unsigned char *)src)[i] == (unsigned char)c)
			return ((unsigned char *)dst + i + 1);
		i++;
	}
	return (NULL);
}
