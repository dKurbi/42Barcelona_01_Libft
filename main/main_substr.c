/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurcbar <dkurcbar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:56:12 by dkurcbar          #+#    #+#             */
/*   Updated: 2023/05/29 13:39:44 by dkurcbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(int args, char **argv)
{
	char 			*str = argv[1];
	unsigned int	start  = ft_atoi(argv[2]);
	size_t 			len = ft_atoi(argv[3]);
	char			*rtn;

	rtn = ft_substr(str, start, len);
	printf("la cadena original:   '%s'\n", str);
	printf("lo que devuelve la f: '%s'\n", rtn);

	char 			*str2 ="";
	unsigned int	start2  = 0;
	size_t 			len2 = 0;

	rtn = ft_substr(str2, start2, len2);
	printf("la cadena original:   '%s'\n", str2);
	printf("lo que devuelve la f: '%s'\n", rtn);

	free(rtn);
	return (0);
}


