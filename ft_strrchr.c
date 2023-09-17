/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:46:20 by sperez-p          #+#    #+#             */
/*   Updated: 2021/08/20 12:46:23 by sperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  NAME
  ****
  ft_strrchr ---> reverse order search for a character in a string.
  
  SYNOPSIS
  ********
  #include "libft.h"
  char	*ft_strrchr(const char *str, int c);
  
  PARAMETERS
  **********
  str ---> the string where to look for the character.
  c   ---> the character to find.
  
  DESCRIPTION
  ***********
  The ft_strrchr() function searches for the last ocurrence of the character 'c'
  in he string pointed to by 'str'.
  
  If it finds it, it returns a pointer to it so that we would have acces to the
  rest of the string starting from that character.
  
  RETURN VALUE
  ************
  - If c is in str, returns a pointer to its last occurrence.
  - If not, returns NULL.
*/

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i--)
	{
		if (*(s + i) == (char)c)
			return (s + i);
	}
	return (NULL);
}
