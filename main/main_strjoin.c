/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurcbar <dkurcbar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:56:12 by dkurcbar          #+#    #+#             */
/*   Updated: 2023/05/25 16:13:36 by dkurcbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(int args, char **argv)
{
	char 			*s1 = argv[1];
	char			*s2 = argv[2];
	char			*rtn;

	rtn = ft_strjoin(s1, s2);
	printf("la cadena: '%s' + la cadena '%s'\n", s1, s2);
	printf("devuelve la cadena: '%s'\n", rtn);
	free(rtn);
	return (0);
}


