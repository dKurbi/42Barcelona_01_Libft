/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurcbar <dkurcbar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:25:54 by dkurcbar          #+#    #+#             */
/*   Updated: 2023/05/16 10:30:09 by dkurcbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>
#include<string.h>
#include<unistd.h>
int main(int args, char **argv)
{
	printf("para la cadena '%s'\nla funcion original devuelve la direccion '%p'\ndonde esta la cadena: '%s'\ny mi funcion, devuelve la direccion '%p'\ndonde esta la cadena '%s'\n",
		   	argv[1], strrchr(argv[1],argv[2][0]), strrchr(argv[1],argv[2][0]), 
			ft_strrchr(argv[1],argv[2][0]), ft_strrchr(argv[1],argv[2][0]));
	return (0);
}
