/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:10:08 by sperez-p          #+#    #+#             */
/*   Updated: 2021/09/08 14:06:18 by sperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
NAME
****
ft_strtrim ---> trim a set of characters from a string

SYNOPSIS
********
#include "libft.h"
char	*ft_strtrim(const char *str, char const *set)
PARAMETERS
**********
str   ---> the to string to trim
start ---> the set of characters to trim

DESCRIPTION
***********
The ft_strtrim() function removes any character from the string 'set' from both
the beginning and the end of the string 's1'. It does not matter the order in which
they appear or if they appear repeated, they are trimmed as long as they are at the 
beginning or at the end of the string 'str'. Whether it finds a different character
at the beginning or at the end, it stops looking for it corresponding side.


RETURN VALUE
************
- A pointer to the trimmed string.
- If any of the parameters are NULL, it returns NULL.
*/

char	*ft_strtrim(const char *str, char const *set)
{
	size_t	end;

	if (!str || !set)
		return (NULL);
	while (*str != '\0' && ft_strchr(set, *str))
		str++;
	end = ft_strlen(str);
	while (end && ft_strchr(set, str[end]))
		end--;
	return (ft_substr(str, 0, end + 1));
}
