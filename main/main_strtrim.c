/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurcbar <dkurcbar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:56:12 by dkurcbar          #+#    #+#             */
/*   Updated: 2023/05/26 13:28:25 by dkurcbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(int args, char **argv)
{
	char 			*s1 = argv[1];
	char			*set = argv[2];
	char			*rtn;

	rtn = ft_strtrim(s1, set);
	printf("la cadena: '%s' hay que sacarle '%s'\n", s1, set);
	printf("lo que devuelve la f: '%s'\n", rtn);
	free(rtn);
	
	char *s3 = "  \t \t \n   \n\n\n\t";
	char *s4 = " \n\t";
	rtn = ft_strtrim(s3, s4);
	printf("la cadena: '%s' hay que sacarle '%s'\n", s3, s4);
	printf("lo que devuelve la f: '%s'\n", rtn);
	free(rtn);

	char *s5 = "";
	char *s6 = "";
	rtn = ft_strtrim(s5, s6);
	printf("la cadena: '%s' hay que sacarle '%s'\n", s5, s6);
	printf("lo que devuelve la f: '%s'\n", rtn);
	free(rtn);


	return (0);
}


