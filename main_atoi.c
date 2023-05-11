/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurcbar <dkurcbar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:19:57 by dkurcbar          #+#    #+#             */
/*   Updated: 2023/05/11 16:34:43 by dkurcbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include "libft.h"
#include "ft_atoi.c"
#include "ft_isdigit.c"
#include "ft_isalnum.c"

int main(int args, char	**argv)
{
	printf("para la cadena %s, el atoi devuelve %d\n", argv[1],atoi(argv[1]));
	printf("para la cadena %s, mi atoi devuelve %d\n", argv[1], ft_atoi(argv[1]));
	return (0);
}
