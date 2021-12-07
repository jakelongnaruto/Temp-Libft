/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:57:46 by lonnguye          #+#    #+#             */
/*   Updated: 2021/12/03 13:05:44 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a “fresh” string end- ing with ’\0’. 
** Each character of the string is initialized at ’\0’. If the allocation fails 
** the function returns NULL. 
** Param 1: The size of the string to be allocated. 
** Return value: The string allocated and initialized to 0.
** Jake's note: make new string and nut 0 to all character.
*/

char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	ft_memset(str, 0, size + 1);
	return (str);
}
