/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshvydka <dshvydka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:02:29 by dshvydka          #+#    #+#             */
/*   Updated: 2024/10/29 16:39:25 by dshvydka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// copy a block of mem w/o overlap
void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (!dest && !src)
		return (0);
	while (i < count)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
