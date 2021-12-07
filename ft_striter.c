/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:31:44 by lonnguye          #+#    #+#             */
/*   Updated: 2021/11/15 00:02:30 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applies the function f to each character of the string passed as argument. 
** Each character is passed by address to f to be modified if necessary.
** Param 1: The string to iterate.
** Param 2: The function to apply to each character of s.
** Return value: None 
*/

void	ft_striter(char *s, void (*f)(char *))
{
	if (!s || !f)
		return ;
	while (*s)
		f(s++);
}
