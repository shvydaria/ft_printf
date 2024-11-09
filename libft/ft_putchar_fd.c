/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshvydka <dshvydka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:40:41 by dshvydka          #+#    #+#             */
/*   Updated: 2024/10/29 16:51:53 by dshvydka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// same as putchar, but we're choosing file descriptor
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
