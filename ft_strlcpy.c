/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:46:58 by sperez-p          #+#    #+#             */
/*   Updated: 2021/09/07 22:15:20 by sperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
NAME
****
ft_strlcpy ---> copy at most n bytes from a string and calculates its lenght

SYNOPSIS
********
#include "mylibft.h"
size_t	strlcpy(char *dst, const char *src, size_t dstsize);

PARAMETERS
**********
dst ---> the strin where the content is to be copied
src ---> the string copied
dstsize ---> the number of character to be copied

DESCRIPTION
***********
The ft_strlcpy() function copies up to 'dstsize - 1' characters from 'str' into
'dst'. As long as 'dstsize' is larger than zero, 'dst' will be null-terminated.
Note that a byte for the null terminating character should be included in 
dstsize.The string 'src' must be null-terminated and 'dst' must have enough
space.

The purpose of this function is to replace the ft_strncpy() function in cases
when you want to make sure that the resulting string is null-terminated. Unlike
ft_strncpy() function, this function returns the total length of the string you
tried to create, that means the lenght of src. It is done to make truncation
detection simple.

RETURN VALUE
************
- Lenght of src.
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = -1;
	j = ft_strlen(src);
	if (dstsize)
	{
		while (src[++i] && --dstsize)
			dst[i] = src[i];
		dst[i] = '\0';
	}
	return (j);
}
