/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajari <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:36:48 by ajari             #+#    #+#             */
/*   Updated: 2022/11/04 18:20:08 by ajari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_hexa_x(size_t i);
int	ft_hexa_xx(size_t i);
int	ft_printf(const char *s, ...);
int	ft_putnbr_fd_u(unsigned int n, int fd);
int	ft_putnbr_fd(int n, int fd);
int	ft_putchar_fd(char n, int fd);
int	ft_putstr_fd(const char *s, int fd);

#endif
