/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgnaiday <lgnaiday@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:30:59 by lgnaiday          #+#    #+#             */
/*   Updated: 2024/01/06 13:40:40 by lgnaiday         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_num(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	else
		return (nbr);
}

size_t	num_len(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*c;

	if (n < 0)
		sign = -1;
	else
		sign = 1;
	len = num_len(n);
	c = (char *)malloc(sizeof(char) * len + 1);
	if (!c)
		return (0);
	c[len--] = '\0';
	while (len >= 0)
	{
		c[len] = '0' + ft_num(n % 10);
		n = ft_num(n / 10);
		len--;
	}
	if (sign == -1)
		c[0] = '-';
	return (c);
}
