/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 22:17:37 by lonnguye          #+#    #+#             */
/*   Updated: 2021/11/24 22:29:06 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** copy at most len characters from src into dst.  If src is less than len 
** characters long, the remainder of dst is filled with `\0' characters. 
** Otherwise, dst is not terminated.
** The source and destination strings should not overlap, as the
** behavior is undefined.
*/

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	n;

	n = ft_strlen(src);
	if (n >= len)
		ft_memcpy(dst, src, len);
	else
	{
		ft_memcpy(dst, src, len);
		while (n < len)
		{
			dst[n] = '\0';
			n++;
		}
	}
	return (dst);
}
