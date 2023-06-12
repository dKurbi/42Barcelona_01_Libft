/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurcbar <dkurcbar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:55:44 by dkurcbar          #+#    #+#             */
/*   Updated: 2023/06/12 11:37:52 by dkurcbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>

int main(int args, char **argv)
{
	int 	n = ft_atoi(argv[1]);
	char	*srt = ft_itoa(n);

	
	printf("el string '%d', el itoa me lo convierte en el entero: '%s'\n", n, srt);
   return (0);
}   

