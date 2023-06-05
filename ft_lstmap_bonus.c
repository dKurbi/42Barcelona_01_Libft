/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurcbar <dkurcbar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 17:18:14 by dkurcbar          #+#    #+#             */
/*   Updated: 2023/06/02 15:02:50 by dkurcbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*nxt;
	void	*aux;

	newlist = NULL;
	nxt = newlist;
	while (lst)
	{
		aux = f(lst->content);
		nxt = ft_lstnew(aux);
		if (!nxt)
		{
			ft_lstclear(&newlist, del);
			if (!aux)
				free(aux);
			return (NULL);
		}
		ft_lstadd_back(&newlist, nxt);
		lst = lst->next;
	}
	return (newlist);
}
