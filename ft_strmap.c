/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 22:20:16 by lonnguye          #+#    #+#             */
/*   Updated: 2021/12/03 13:08:30 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applies the function f to each character of the string given as argument to 
** create a “fresh” new string (with malloc(3)) resulting from the successive 
** applications of f.
** Param 1: The string to map
** Param 2: The function to apply to each character of s.
** Return value: The "fresh" string created from the successive application of f.
*/

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc((sizeof(char) * (ft_strlen(s) + 1)));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
