/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 22:45:13 by lonnguye          #+#    #+#             */
/*   Updated: 2021/12/03 12:52:25 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*to;
	unsigned char	*from;
	size_t			i;

	to = (unsigned char *)dst;
	from = (unsigned char *)src;
	i = 0;
	if (dst == src)
		return (dst);
	if (src < dst)
	{
		while (++i <= len)
			to[len - i] = from[len - i];
	}
	else
	{
		while (len-- > 0)
			*(to++) = *(from++);
	}
	return (dst);
}
