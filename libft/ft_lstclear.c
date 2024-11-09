/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshvydka <dshvydka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:42:54 by dshvydka          #+#    #+#             */
/*   Updated: 2024/10/29 13:26:43 by dshvydka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Deletes and frees the given node and every successor of that node,
// using the function ’del’
// and free(3). Finally, the pointer to the list must be set to NULL.
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*temp;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		ft_lstdelone(temp, del);
	}
	*lst = NULL;
}
