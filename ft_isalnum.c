/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:44:38 by sperez-p          #+#    #+#             */
/*   Updated: 2021/08/20 12:44:40 by sperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  NAME
  ****
  ft_isalnum ---> is an alphanumeric character

  SYNOPSIS
  ***********
  #include <ctype.h>
  int	isalnum(int c);
  #include "libft.h"
  int	ft_isalnum(int c);

  DESCRIPTION
  ***********
  The function ft_isalnum() mimics the behavior of the isalnum() function from
  ctype C library. Both functions check for an alphanumeric character.

  PARAMETERS
  **********
  c ---> The character to be checked.

  RETURN VALUE
  ************
  - Non-zero value if c is a digit or a letter.
  - Zero value if not.
*/

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
