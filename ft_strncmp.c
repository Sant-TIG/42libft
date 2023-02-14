/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:46:40 by sperez-p          #+#    #+#             */
/*   Updated: 2021/08/23 14:04:10 by sperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  NAME
  ****
  ft_strncmp ---> compare strings to at most the first n bytes
  
  SYNOPSYS
  ********
  #include "strings.h"
  int	ft_strncmp(const char *str1, const char *str2, size_t n);
  
  PARAMETERS
  **********
  str1 ---> the first string to compare.
  str2 ---> the second string to compare.
  n    ---> the number of characters to be checked(at most).
  
  DESCRIPTION
  ***********
  The ft_strncmp() function checks if two strings are equal or not to at most their first
  n bytes. To do this, it compares both strings character by character until it finds a
  difference, one of them ends, or until it has compared n bytes. As the original function,
  the comparison is done using unsigned characters.
  
  In any of the cases, the function will return the subtraction of the last character it
  checks in both strings, so that if they are equal the result would be zero.
  
  RETURN VALUE
  ************
  - Zero if the strings are equal.
  - Greater than zero if the last character checked of str1 is greater than that of str2.
  - Less than zero if the last character checked of str1 is less than that of str2.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (--n && *s1 && *s2)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}	
