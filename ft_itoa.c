/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:42:49 by lonnguye          #+#    #+#             */
/*   Updated: 2021/12/07 15:18:56 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocate (with malloc(3)) and returns a “fresh” string ending with ’\0’
** representing the integer n given as argument.
** Negative numbers must be supported. If the allocation fails,
** the function returns NULL.
** Param 1: The integer to be transformed into a string.
** Return value: The string representing the integer passed as argument.
*/

/*
** ft_digit_count(int n): Count how many digits there are in this INT.
*/

static int	ft_digit_count(int num)
{
	int	count;

	count = 0;
	while (num != 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char				*str;
	unsigned int		length;
	unsigned int		nbr;

	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
		nbr = (unsigned int)(n * -1);
	else
		nbr = (unsigned int)n;
	if (n < 0)
		length = (unsigned int)ft_digit_count(n) + 1;
	else
		length = (unsigned int)ft_digit_count(n);
	str = ft_strnew(length);
	str[length] = '\0';
	while (length--)
	{
		str[length] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
