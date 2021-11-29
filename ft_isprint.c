/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:45:38 by sperez-p          #+#    #+#             */
/*   Updated: 2021/08/20 12:45:42 by sperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  NAME
  ****
  ft_isprint ---> is an ascii printable character

  SYNOPSIS
  ***********
  #include <ctype.h>
  int	isprint(int c);
  #include "libft.h"
  int	ft_isprint(int c);

  DESCRIPTION
  ***********
  The function ft_isprint() mimics the behavior of the isprint() function from
  ctype C library. Both functions check if c is an ascii printable character.

  PARAMETERS
  **********
  c ---> The character to be checked.

  RETURN VALUE
  ************
  - Non-zero value if c is an ascii printable character.
  - Zero value if not.
*/
/*
  RETURN A CONDITION
  ******************
  When we return a condition, the computer will check if the condition is true or
  false. If it is true it will return 1(boolean true) and if it is false it will
  return 0(boolean false).
*/

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
