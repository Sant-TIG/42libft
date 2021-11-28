/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:48:08 by sperez-p          #+#    #+#             */
/*   Updated: 2021/09/06 17:12:28 by sperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

/*
  NAME
  ****
  ft_atoi ---> array to integer

  SYNOPSIS
  ***********
  #include <stdlib.h>
  int	atoi(const char *str);
  #include "libft.h"
  int	ft_atoi(const char *str);

  DESCRIPTION
  ***********
  The function ft_atoi() mimics the behavior of the atoi() function from
  <stdlib.h> library. Both functions convert the string pointed to by
  str to int. The behaviour is the same as "strtol(str, NULL, 10);" except
  that it detect errors.

  PARAMETERS
  **********
  str ---> The string representation of an integral number.

  RETURN VALUE
  ************
  This function returns the converted value as an int value. If there is
  an error returns zero.

  BUGS
  ****
  errno is not set on error so there is no way to distinguish between 0 as
  an error and as as the converted value. No check for overflow or underflow
  are done. Only base-10 input can be converted.
*/

int	ft_atoi(const char *str)
{
	int	result;
	ssize_t	sign;

	result = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == 43 || *str == 45)
	{
		if (*str == 45)
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
		result = (*str++ - 48) + (result * 10);
	return (result * sign);
}
