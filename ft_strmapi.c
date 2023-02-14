/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 11:04:31 by sperez-p          #+#    #+#             */
/*   Updated: 2021/08/23 11:26:04 by sperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
NAME
****
ft_strmapi ---> iterate string aplying a function to each character

SYNOPSIS
********
#include "mylibft.h"
char	*ft_strmapi(const char *str, char (*f)(unsigned int, char));

PARAMETERS
**********
str ---> the string on which to iterate
f   ---> the function to apply to each character

DESCRIPTION
***********
The ft_strmapi() function applies the function 'f' to each character of the
string 'str' to create a new string resulting from successive applications of
the function. This new string will be allocated in a dinamic memory space using
the malloc() C function.

It first checks if 'str' is not NULL and then reserves the memory space for the
new string 'dst', which will be the same size as the original string.

Once verified that there is no error allocating the memory, it iterates 'str'
assigning to each space of 'dst' the return value of applying the function 'f'
to each character of 'str'.

RETURN VALUE
************
- A pointer to he new string.
- If there is an error allocating memory or if 'str' is NULL, returns NULL.
*/

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*dest;
	size_t	i;

	i = -1;
	if (!s)
		return (NULL);
	dest = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!dest)
		return (NULL);
	while (s[++i])
		dest[i] = f(i, ((char *)s)[i]);
	dest[i] = '\0';
	return (dest);
}
