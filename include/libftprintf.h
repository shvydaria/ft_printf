/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshvydka <dshvydka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 21:23:39 by dshvydka          #+#    #+#             */
/*   Updated: 2024/11/13 15:10:45 by dshvydka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_printf_char(char c);
int		ft_printf_percent(void);
int		ft_printf_str(char *str);
int		ft_printf_num_s(int num);
int		ft_printf_num_u(unsigned int num);
int		ft_printf_hex(unsigned int num, int is_uppercase);
int		ft_printf_pointer(void *ptr);
// helpers
int		ft_putstr(char *str);
char	*ft_utoa(unsigned int n);
char	*ft_utoa_base(unsigned long n, int is_uppercase);
int		get_num_len_base(unsigned long num, int base);

#endif