/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurcbar <dkurcbar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:42:50 by dkurcbar          #+#    #+#             */
/*   Updated: 2023/05/08 19:05:42 by dkurcbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_memcpy.c"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	const void	*old_src;

	i = 0;
	old_src = src;
	while (src++ < old_src + n)
	{
		if (src == dest)
		{
			ft_memcpy((void *) old_src - n , old_src, n);
			ft_memcpy(dest, old_src - n, n);
			return(dest) ;
		}	
	}
	ft_memcpy(dest, old_src, n);
	return (dest);
}
