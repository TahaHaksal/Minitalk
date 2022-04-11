/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaksal <m.haksal@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:37:28 by mhaksal           #+#    #+#             */
/*   Updated: 2022/03/30 11:07:03 by mhaksal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_printchar(int c);
int		ft_printstr(char *str);
int		ft_printnbr(int n);
int		ft_printchar_hex(unsigned int x, char format);
int		ft_print_unsigned_char(unsigned int u);
int		ft_print_ptr(unsigned long p);
int		ptr_len(unsigned long p);
void	print_nbr(int n);
void	write_ptr(unsigned long p);

#endif
