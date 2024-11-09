/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshvydka <dshvydka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:30:01 by dshvydka          #+#    #+#             */
/*   Updated: 2024/10/29 16:57:38 by dshvydka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// not dumb, but dup -> duplicates the string, allocates mem for new str
char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	s_len;

	s_len = ft_strlen(s1);
	dest = malloc(s_len + 1);
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s1, s_len + 1);
	return (dest);
}
