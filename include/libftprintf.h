/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshvydka <dshvydka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 21:23:39 by dshvydka          #+#    #+#             */
/*   Updated: 2024/11/07 16:43:45 by dshvydka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int			ft_printf(const char *format, ...);
int			ft_printf_char(int c);
int			ft_printf_percent(void);
int			ft_printf_str(char *str);
int			ft_printf_num_s(int num);
int			ft_printf_num_u(unsigned int num);

// helpers
int			ft_putstr(char *str);
char		*ft_itoa_unsigned(unsigned int n);
static int	get_num_len(long num);
static void	fill_str(char *str, long num, int len);

#endif