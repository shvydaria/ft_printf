/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshvydka <dshvydka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:22:20 by dshvydka          #+#    #+#             */
/*   Updated: 2024/11/05 16:30:43 by dshvydka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// %c Prints a single character.
// %% Prints a percent sign.
int	ft_printf_char(int c)
{
	write(1, &c, 1);
	return (1);
}
