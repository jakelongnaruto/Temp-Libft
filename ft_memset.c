/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 22:11:08 by lonnguye          #+#    #+#             */
/*   Updated: 2021/12/03 12:48:54 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** *memset() is used to fill a block of memory with a particular value.
** The syntax of memset() function is as follows :
** ptr ==> Starting address of memory to be filled
** x   ==> Value to be filled
** n   ==> Number of bytes to be filled starting from ptr to be filled 
** void *memset(void *ptr, int x, size_t n);
** Note that ptr is a void pointer, so that we can pass any 
** type of pointer to this function.
*/

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	ch;

	ch = c;
	p = s;
	while (n--)
		*p++ = ch;
	return (s);
}
