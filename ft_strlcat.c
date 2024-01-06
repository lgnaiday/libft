/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgnaiday <lgnaiday@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:41:14 by lgnaiday          #+#    #+#             */
/*   Updated: 2024/01/06 13:41:20 by lgnaiday         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	scount;
	size_t	dlen;

	if (!dst && !dstsize)
		return (0);
	dlen = ft_strlen(dst);
	if (dlen >= dstsize)
		return (ft_strlen(src) + dstsize);
	scount = 0;
	while (src[scount] != '\0' && dlen + 1 < dstsize)
	{
		dst[dlen] = src[scount];
		scount++;
		dlen++;
	}
	dst[dlen] = '\0';
	return (ft_strlen(&src[scount]) + dlen);
}
