/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:16:47 by lonnguye          #+#    #+#             */
/*   Updated: 2021/12/03 13:01:31 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* strlcat() appends string src to the end of dst.  It will append at most 
** dstsize - strlen(dst) - 1 characters. It will then NUL-termi-nate, unless 
** dstsize is 0 or the original dst string was longer than dstsize (in practice
** this should not happen as it means that either dstsize is incorrect or that 
** dst is not a proper string). If the src and dst strings overlap,
** the behavior is undefined.
*/

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	dst_length;
	size_t	src_length;
	size_t	result;

	dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	result = 0;
	if (dstsize <= dst_length)
		result = dstsize + src_length;
	else
		result = dst_length + src_length;
	while (*src && dstsize > (dst_length + 1))
	{
		dst[dst_length] = *src;
		src++;
		dst_length++;
	}
	dst[dst_length] = '\0';
	return (result);
}
