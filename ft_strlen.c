/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:43:56 by sperez-p          #+#    #+#             */
/*   Updated: 2021/09/06 17:26:11 by sperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
NAME
****
ft_strlen ---> calculate the length of a string

SYNOPSIS
********
#include "mylibft.h"
size_t	ft_strlen(const char *str);

PARAMETERS
**********
str ---> the string whose length is to be found

DESCRIPTION
***********
The ft_strlen() function calculates the length of 'str', excluiding the 
terminating null byte '\0'. If the content of 'str' if NULL, returns zero.

RETURN VALUE
************
- The number of bytes in 'str'.
- If 'str' is NULL, returns zero.
*/

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
