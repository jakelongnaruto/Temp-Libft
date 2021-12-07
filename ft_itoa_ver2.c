/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_ver2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 01:29:15 by lonnguye          #+#    #+#             */
/*   Updated: 2021/12/08 01:32:40 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char	*ft_itoa_ver2(int n)
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
	if (!str)
		return (NULL);
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
