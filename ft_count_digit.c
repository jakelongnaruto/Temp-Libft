/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:23:58 by lonnguye          #+#    #+#             */
/*   Updated: 2021/12/07 15:25:03 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Count the number of digits of an int
*/

int	ft_count_digit(int num)
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
