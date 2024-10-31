/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshvydka <dshvydka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:09:22 by dshvydka          #+#    #+#             */
/*   Updated: 2024/10/29 17:08:12 by dshvydka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// locates the fist occurrence of the \0 needle in the haystack
char	*ft_strnstr(char *haystack, char *needle, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	if (*needle == '\0')
		return (haystack);
	i = 0;
	while (haystack[i] != '\0' && i < size)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < size
			&& needle[j] != '\0')
		{
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}
	return (NULL);
}
