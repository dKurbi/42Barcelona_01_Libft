/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurcbar <dkurcbar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:55:44 by dkurcbar          #+#    #+#             */
/*   Updated: 2023/05/31 14:52:57 by dkurcbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>

int main(int args, char **argv)
{
	int 	n = ft_atoi(argv[1]);
	char	*srt = ft_itoa(n);

	
	printf("el numero '%d', el itoa me lo convierte en: '%s'\n", n, srt);
	srt = ft_itoa(INT_MIN);
	printf("el numero '%d', el itoa me lo convierte en: '%s'\n", INT_MIN, srt);
	srt = ft_itoa(INT_MIN - 1);
	printf("el numero '%d', el itoa me lo convierte en: '%s'\n", INT_MIN, srt);
	srt = ft_itoa(INT_MIN - 2);
	printf("el numero '%d', el itoa me lo convierte en: '%s'\n", INT_MIN, srt);
   return (0);
}   

