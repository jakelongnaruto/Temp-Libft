/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:17:51 by lonnguye          #+#    #+#             */
/*   Updated: 2021/12/05 18:21:47 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns an array of “fresh” strings 
** (all ending with ’\0’, including the array itself) ob- tained by spliting 
** s using the character c as a delimiter. If the allocation fails the 
** function returns NULL. 
** Example : ft_strsplit("*hello*fellow***students*", ’*’) 
** returns the array ["hello", "fellow", "students"].
** Param 1: The string to split.
** Param 2: Delimeter charater.
** Return value: The array of "fresh:" strings result of the split.
*/

static char	**ft_free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		array[i] = NULL;
		i++;
	}
	free(array);
	array[i] = NULL;
	return (array);
}

static int	ft_word_counter(char const *str, char c)
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

static int	ft_starthere_index(const char *s, char c, int i)
{
	while (s[i] == c)
		i++;
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;
	int		wordstart;

	if (!s)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * (ft_word_counter(s, c)) + 1);
	if (!array)
		return (NULL);
	j = 0;
	i = 0;
	while (j < ft_word_counter(s, c))
	{
		wordstart = ft_starthere_index(s, c, i);
		i = wordstart;
		while (s[i] && s[i] != c)
			i++;
		array[j] = ft_strsub(s, wordstart, i - wordstart);
		if (!array[j])
			return (ft_free_array(array));
		j++;
	}
	array[j] = NULL;
	return (array);
}
