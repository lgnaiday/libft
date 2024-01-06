/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgnaiday <lgnaiday@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:48:04 by lgnaiday          #+#    #+#             */
/*   Updated: 2024/01/06 13:41:40 by lgnaiday         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	strin_len;
	size_t	size;
	char	*sub_str;

	if (!s)
		return (NULL);
	strin_len = ft_strlen(s);
	if (start > strin_len)
		return (ft_strdup(""));
	if (start + len > strin_len)
		len = strin_len - start;
	size = len + 1;
	sub_str = (char *) malloc(size * sizeof(char));
	if (!sub_str)
		return (NULL);
	ft_memcpy(sub_str, s + start, len);
	sub_str[len] = '\0';
	return (sub_str);
}
