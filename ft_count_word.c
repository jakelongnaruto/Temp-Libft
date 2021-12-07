/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:35:42 by lonnguye          #+#    #+#             */
/*   Updated: 2021/12/07 15:40:09 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** count the number of words in a string, seperated by char c
*/

int	ft_count_word(char const *str, char c)
{
	int	i;
	int	count;
	int	start_word;

	i = 0;
	count = 0;
	start_word = 1;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			start_word = 1;
		else if (str[i] != c && start_word == 1)
		{
			count++;
			start_word = 0;
		}
		i++;
	}
	return (count);
}
