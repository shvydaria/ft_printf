/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshvydka <dshvydka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:23:21 by dshvydka          #+#    #+#             */
/*   Updated: 2024/11/08 15:22:48 by dshvydka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// %p (Pointer): Convert a void * pointer to a hexadecimal representation,
//	typically prefixed with 0x.
// %x Prints a number in hexadecimal (base 16) lowercase format.
// %X Prints a number in hexadecimal (base 16) uppercase format.

#include "libftprintf.h"

int	get_num_len_base(long num, int base)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num /= base;
		len++;
	}
	return (len);
}

static void	fill_str_hex(char *str, unsigned int num, int len, int is_uppercase)
{
	char *digits; 
  
  digits = is_uppercase ? "0123456789ABCDEF" : "0123456789abcdef";
	str[len] = '\0';
	while (len-- > 0)
	{
		str[len] = digits[num % 16];
		num /= 16;
	}
}

char	*ft_utoa_base(unsigned long n, int is_uppercase)
{
	int		len;
	char	*result;

	if (n == 0)
		return (ft_strdup("0"));

	len = get_num_len_base(n, 16);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);

	fill_str_hex(result, n, len, is_uppercase);
	return (result);
}

int ft_printf_hex(unsigned int num, int is_uppercase)
{
    char *hex_str;
    int len;

    hex_str = ft_utoa_base(num, is_uppercase);
    if (!hex_str)
        return -1;
    len = write(1, hex_str, ft_strlen(hex_str));
    free(hex_str);
    if (len == -1)
        return -1;
    return (len);
}

int ft_printf_pointer(void *ptr)
{
    unsigned long address; 
    char *hex_str;
    int hex_len;
    int len;

    address = (unsigned long)ptr;
    hex_str = ft_utoa_base(address, 0);
    
    if (!hex_str)
        return -1;
    len = write(1, "0x", 2);
    free(hex_str);
    if (len == -1)
        return -1;
    hex_len = write(1, hex_str, ft_strlen(hex_str));
    free(hex_str);
    if (hex_len == -1)
      return -1;
    return (len + hex_len);
}