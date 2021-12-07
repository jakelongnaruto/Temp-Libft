/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:42:49 by lonnguye          #+#    #+#             */
/*   Updated: 2021/12/08 01:28:57 by lonnguye         ###   ########.fr       */
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

static int	ft_absolute_value(int num)
{
	if (num < 0)
		return (-1 * num);
	return (num);
}

static int	ft_numlen(int num)
{
	int	len;

	if (num <= 0)
		len = 1;
	else
		len = 0;
	while (num != 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		len;
	char	*str;

	len = ft_numlen(n);
	sign = (n < 0) ? -1 : 1;
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len > 0)
	{
		str[len - 1] = ft_absolute_value(n % 10) + '0';
		n = ft_absolute_value(n / 10);
		len--;
	}
	if (sign == -1)
		str[0] = '-';	
	return (str);
}
