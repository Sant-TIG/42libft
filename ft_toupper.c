/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:46:01 by sperez-p          #+#    #+#             */
/*   Updated: 2021/08/20 12:46:04 by sperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  NAME
  ****
  ft_toupper ---> convert char to uppercase
  
  SYNOPSIS
  ********
  #include "libft.h"
  int	ft_toupper(int c);
  
  PARAMETERS
  **********
  c --> The character to convert.
  
  DESCRIPTION
  ***********
  The ft_toupper() function uses the ft_islower() function to check if 'c'
  is alphabetic and lowercase. If it is the case, converts it to uppercase and
  if it not, it does not modify it.
  
  RETURN VALUE
  ************
  - The character converted to uppercase.
  - If it is not possible to convert, the original character.
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}
