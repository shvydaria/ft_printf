/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshvydka <dshvydka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:43:06 by dshvydka          #+#    #+#             */
/*   Updated: 2024/11/08 15:14:39 by dshvydka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

// cspdiuxX%
int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		total_chars;
	int		chars_printed;

	total_chars = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1) == 'd')
		{
			format++;
			chars_printed = ft_printf_num(va_arg(args, int));
			if (chars_printed == -1)
			{
				va_end(args);
				return (-1);
			}
			total_chars += chars_printed;
		}
		else
		{
			if (write(1, format, 1) == -1)
			{
				va_end(args);
				return (-1);
			}
			total_chars++;
		}
		format++;
	}
	va_end(args);
	return (total_chars);
}
