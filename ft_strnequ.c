/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 00:12:36 by lonnguye          #+#    #+#             */
/*   Updated: 2021/11/16 00:14:20 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Lexicographical comparison between s1 and s2 up to n characters 
** or until a ’\0’ is reached. If the 2 strings are identical, 
** the function returns 1, or 0 otherwise.
** Param 1: The first string to be compared.
** Param 2: The second string to be compared.
** Param 3: The maximum number of characters to be compared.
*/

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1 || !s2)
		return (0);
	return (ft_strncmp(s1, s2, n) == 0);
}
