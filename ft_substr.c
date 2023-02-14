/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:58:53 by sperez-p          #+#    #+#             */
/*   Updated: 2021/08/23 18:37:33 by sperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
NAME
****
ft_substr ---> extract a substring from a string

SYNOPSIS
********
#include "strings.h"
char	*ft_substr(const char *str, unsgined int start, size_t len);

PARAMETERS
**********
str   ---> the string where to extract the substring
start ---> the index of the string where the substring starts
len   ---> the maximum length of the substring

DESCRIPTION
***********
The ft_substr() function extracts a substring from a string. This substring
will start from the 'start' index of the string and will have a maximum length
of 'len' bytes. However, there are two things to keep in mind:

- The value of 'start' must not be greater than the length of 'str'. In that
case, it returns a string consisiting of a single null character.

- The number of bytes to be copied is always limited to a maximum equal to the
number of bytes that can be copied from the original string from the 'start'
position to the end of the string.

RETURN VALUE
************
- A pointer to the substring.
- If 'start' is greater than the length of 'str', returns a string consisting of
a single null character.
- If there is an error allocating the memory space or if 'str' is NULL, it returns NULL.
*/

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	size_t	new_len;
	char	*dst;

	if (!str)
		return(NULL);
	if (start > ft_strlen(str))
		return (ft_strdup(""));
	str = str + start;
	new_len = ft_strlen (str);
	if (len > new_len)
		len = new_len;
	dst = (char *)malloc(sizeof(char) * len + 1);
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, str, len + 1);
	return (dst);	
}
