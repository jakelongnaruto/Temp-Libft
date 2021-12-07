/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_absolute_value.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 01:20:00 by lonnguye          #+#    #+#             */
/*   Updated: 2021/12/08 01:22:20 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Return the absolute value of an int
*/

int	ft_absolute_value(int num)
{
	if (num < 0)
		return (-1 * num);
	return (num);
}
