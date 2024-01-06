/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgnaiday <lgnaiday@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:31:46 by lgnaiday          #+#    #+#             */
/*   Updated: 2024/01/06 13:40:45 by lgnaiday         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	ch;

	ch = c;
	s = (unsigned char *)b;
	i = 0;
	while (i < n)
	{
		if (*s == ch)
		{
			return ((char *)s);
		}
		else
			s++;
		i++;
	}
	return (NULL);
}
