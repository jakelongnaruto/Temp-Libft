/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 23:24:57 by lonnguye          #+#    #+#             */
/*   Updated: 2021/12/06 12:58:08 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The bzero() function writes n zeroed bytes to the string s.
** If n is zero bzero() does nothing.
** hint: use ft_memset(s, 0, n);
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
