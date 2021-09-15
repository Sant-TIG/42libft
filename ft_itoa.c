/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 15:54:44 by sperez-p          #+#    #+#             */
/*   Updated: 2021/08/23 11:41:03 by sperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_intlen(int n)
{
	int	n_len;

	n_len = 0;
	if (n == 0)
		n_len++;
	if (n < 0)
	{
		n *= -1;
		n_len++;
	}
	while (n > 0)
	{
		n /= 10;
		n_len++;
	}
	return (n_len);
}

char	*ft_charconv(char *dest, int n, int n_len)
{
	if (n == 0)
		*dest = 48;
	if (n < 0)
	{
		*dest = 45;
		n *= -1;
	}
	while (n > 0)
	{
		*(dest + n_len--) = 48 + (n % 10);
		n /= 10;
	}
	return (dest);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		n_len;

	if (n == -2147483648)
	{
		dest = (char *)malloc(sizeof(char) * 12);
		if (!dest)
			return (NULL);
		ft_strlcpy(dest, "-2147483648", 12);
		return (dest);
	}
	n_len = ft_intlen(n);
	dest = (char *)malloc(sizeof(char) * n_len + 1);
	if (!dest)
		return (NULL);
	*(dest + n_len--) = '\0';
	dest = ft_charconv(dest, n, n_len);
	return (dest);
}
