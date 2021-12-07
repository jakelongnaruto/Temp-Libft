/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 23:06:53 by lonnguye          #+#    #+#             */
/*   Updated: 2021/12/03 13:09:23 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applies the function f to each character of the string passed as argument by 
** giving its index as first argument to create a “fresh” new string 
** (with malloc(3)) resulting from the suc- cessive applications of f.
** Param 1: The string to map.
** Param 2: The function to apply to each character of s and its index.
** Return value: The “fresh” string created from the successive 
** applications of f.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
