/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshvydka <dshvydka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:22:37 by dshvydka          #+#    #+#             */
/*   Updated: 2024/11/08 14:42:27 by dshvydka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// %s Prints a string (as defined by the common C convention).

int	ft_putstr(char *str)
{
	int	i;
	int	check;

	i = 0;
	while (str[i] != '\0')
	{
		check = write(1, &str[i], 1);
		if (check == -1)
			return (-1);
		i++;
	}
	return (i);
}

int	ft_printf_str(char *str)
{
	if (str == NULL)
		return (ft_putstr("(null)"));
	return (ft_putstr(str));
}
