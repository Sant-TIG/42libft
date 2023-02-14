/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:45:51 by sperez-p          #+#    #+#             */
/*   Updated: 2021/08/20 12:45:52 by sperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  NAME
  ****
  ft_tolower ---> convert char to lowercase
  
  SYNOPSIS
  ********
  #include "convert.h"
  int	ft_tolower(int c);
  
  PARAMETERS
  **********
  c --> The character to convert.
  
  DESCRIPTION
  ***********
  The ft_tolower() function uses the ft_isupper() function to check if 'c'
  is alphabetic and uppercase. If it is the case, converts it to lowercase and
  if it not, it does not modify it.
  
  RETURN VALUE
  ************
  - The character converted to lowercase.
  - If it is not possible to convert, the original character.
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}
