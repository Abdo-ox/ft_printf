/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajari <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:56:06 by ajari             #+#    #+#             */
/*   Updated: 2022/11/04 18:55:26 by ajari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_x(size_t i)
{
	int	c;

	c = 0;
	if (i < 10)
	{
		ft_putchar_fd(i + 48, 1);
		c++;
	}
	else if (i >= 10 && i < 16)
	{
		ft_putchar_fd(i + 87, 1);
		c++;
	}
	else
	{
		c += ft_hexa_x(i / 16);
		c += ft_hexa_x(i % 16);
	}
	return (c);
}
