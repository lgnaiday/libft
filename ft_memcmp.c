/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgnaiday <lgnaiday@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:33:20 by lgnaiday          #+#    #+#             */
/*   Updated: 2024/01/05 20:37:16 by lgnaiday         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char		*alt1;
	unsigned const char		*alt2;

	alt1 = (unsigned const char *)s1;
	alt2 = (unsigned const char *)s2;
	while (n)
	{
		if (*alt1 != *alt2)
			return (*alt1 - *alt2);
		alt1++;
		alt2++;
		n--;
	}
	return (0);
}
