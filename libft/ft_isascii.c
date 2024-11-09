/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshvydka <dshvydka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:47:36 by dshvydka          #+#    #+#             */
/*   Updated: 2024/10/29 16:23:21 by dshvydka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// checks whether c fits into the ASCII character set
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
		return (0);
}
