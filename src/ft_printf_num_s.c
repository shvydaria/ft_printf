/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_num_s.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshvydka <dshvydka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:24:57 by dshvydka          #+#    #+#             */
/*   Updated: 2024/11/07 14:31:15 by dshvydka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// % d Prints a decimal(base 10) number.
// % i Prints an integer in base 10.

int	ft_printf_num_s(int num)
{
	char	*str;
	int		len;

	len = 0;
	str = ft_itoa(num);
	if (str)
	{
		len = ft_strlen(str);
		write(1, str, len);
		free(str);
	}
	else
		return (0);
	return (len);
}
