/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:47:55 by sperez-p          #+#    #+#             */
/*   Updated: 2021/08/20 12:52:20 by sperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  NAME
  ****
  ft_strnstr ---> search for a substring in a string to at most n bytes.
  
  SYNOPSIS
  ********
  #include "mylibft.h"
  char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
  
  PARAMETERS
  **********
  haystack ---> the string where to find the substring.
  needle   ---> the substring to find.
  n        ---> the number of characters to be checked(at most).
  
  DESCRIPTION
  ***********
  The ft_strnstr() function searches for the first ocurrence of the substring
  'needle' in the string 'haystack', where no more than n bytes are searched.
  If it finds the entire secuence of characters specified in 'needle' within
  the limit marked by n, it returns a pointer to the beginning of the first
  occurrence of the substring.
  
  RETURN VALUE
  ************
  - If 'needle' is in 'haystack' searching at most n bytes, returns a pointer
    to the beginning of its first occurrence.
  - If not, returns NULL.
  - If 'needle is empty string, returns haystack.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack [i + j] == needle[j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
