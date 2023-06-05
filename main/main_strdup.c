/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurcbar <dkurcbar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:17:45 by dkurcbar          #+#    #+#             */
/*   Updated: 2023/05/25 12:38:02 by dkurcbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(int args, char **argv)
{
	char	*str = argv[1];
	char	*rtno;
	char	*rtnm;

	rtno = strdup(str);
	rtnm = ft_strdup(str);

	printf("la cadena origial esta en  '%p' y contiene: '%s'\n", str, str);
	printf("strdup    devuelve el p:   '%p' y contiene: '%s'\n", rtno, rtno);
	printf("ft_strdup devuelve el p:   '%p' y contiene: '%s'\n", rtnm, rtnm);
	free(rtno);
	free(rtnm);
	return (0);
}

