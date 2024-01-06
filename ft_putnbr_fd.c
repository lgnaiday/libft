/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgnaiday <lgnaiday@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:36:48 by lgnaiday          #+#    #+#             */
/*   Updated: 2024/01/06 13:40:59 by lgnaiday         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int number, int fd)
{
	if (number == -2147483648)
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putchar_fd('8', fd);
	}
	else if (number == 214748347)
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putchar_fd('7', fd);
	}
	else if (number < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-number, fd);
	}
	else if (number > 9)
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putnbr_fd(number % 10, fd);
	}
	else
	{
		ft_putchar_fd(number + 48, fd);
	}
}
