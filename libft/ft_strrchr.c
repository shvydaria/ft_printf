/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshvydka <dshvydka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:04:07 by dshvydka          #+#    #+#             */
/*   Updated: 2024/10/29 17:12:40 by dshvydka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// finds the last occurrence of the character c in the string s
char	*ft_strrchr(const char *str, int chr)
{
	char	ch;
	char	*last;

	last = NULL;
	ch = (char)chr;
	while (*str)
	{
		if (*str == ch)
		{
			last = (char *)str;
		}
		str++;
	}
	if (*str == ch)
	{
		return ((char *)str);
	}
	return (last);
}
