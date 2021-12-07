/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 22:01:32 by lonnguye          #+#    #+#             */
/*   Updated: 2021/11/24 22:07:38 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copy the string src to dst (including the terminating `\0' character.)
** The source and destination strings should not overlap, as the
** behavior is undefined.
*/

char	*ft_strcpy(char *dst, const char *src)
{
	ft_memcpy(dst, src, ft_strlen(src) + 1);
	return (dst);
}
