/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshvydka <dshvydka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:24:56 by dshvydka          #+#    #+#             */
/*   Updated: 2024/10/29 16:50:50 by dshvydka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// copies up to size - 1 chars from the NUL-terminated src to dst
// add \0 to the res, taking the full size of the buffer.
size_t	ft_strlcpy(char *restrict dest, const char *restrict src, size_t n)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (n == 0)
		return (src_len);
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
