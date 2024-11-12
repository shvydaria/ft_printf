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

// char translator(char *spec)
// {
	
	
// 	if (spec == "%c")
// 		ft_printf_char(c);
// 	else if (spec == "%s")
// 		ft_printf_str();
// 	else if (spec == "%p")
// 		ft_printf_str();
// 	else if (spec == "%d" || "%i")
// 		ft_printf_str();
// 	else if (spec == "%u")
// 		ft_printf_str();
// 	else if (spec == "%x" || "%X")
// 		ft_printf_str();
// }
// %c %s %p %d%i %u %xX %

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int args_i;
	int		total_chars;
	int		chars_printed;

	chars_printed = 0;
	total_chars = 0;
	args_i = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				chars_printed = ft_printf_char(va_arg(args, char));
			else if (*format == 'd' || *format == 'i')
				chars_printed = ft_printf_num_s(va_arg(args, int));
			else if (*format == 'u')
				chars_printed = ft_printf_num_u(va_arg(args, unsigned int));
			else if (*format == 's')
				chars_printed = ft_printf_str(va_arg(args, int));
			else if (*format == 'p')
				chars_printed = ft_printf_pointer(va_arg(args, int));
			else if (*format == 'x' || *format == 'X')
				chars_printed = ft_printf_hex(va_arg(args, unsigned int), *format == 'X');
			else 
				chars_printed = ft_printf_char(va_arg(args, char));
		} else
		{
			if (write(1, format, 1) == -1)
			{
				va_end(args);
				return (-1);
			}
			total_chars++;
		}
		if (chars_printed == -1)
		{
			va_end(args);
			return (-1);
		}
		total_chars += chars_printed;
		format++;		
	}
	va_end(args);
	return (total_chars);
}

int main () {
	// input string
	char c = 'c';
	ft_printf("%c", c);
}