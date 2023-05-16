/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurcbar <dkurcbar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:26:35 by dkurcbar          #+#    #+#             */
/*   Updated: 2023/05/16 14:07:36 by dkurcbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int main(int args, char **argv)
{
	char	*src;
	char	*rtn_o;
	char	*rtn_m;
	char	c;
	int		s;

	src = &*argv[1];
	c = argv[2][0];
	s = ft_atoi(argv[3]);
	rtn_o = memchr(src, c, s);
	rtn_m = ft_memchr(src, c, s);
	
	printf("Para la direccion de memoria: '%p' que contiene '%s'\n",src, src);
	printf("La funcion O devuelve la direccion= %p, con el contenido '%s'\n", rtn_o, rtn_o);
	printf("La funcion M devuelve la direccion= %p, con el contenido '%s'\n", rtn_m, rtn_m);
	return (0);
}
