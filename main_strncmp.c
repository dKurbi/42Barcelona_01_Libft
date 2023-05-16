/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurcbar <dkurcbar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:56:45 by dkurcbar          #+#    #+#             */
/*   Updated: 2023/05/16 11:30:53 by dkurcbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int main(int args, char **argv)
{ 
	int my;
	int original;

/*	my =  ft_strncmp(argv[1],argv[2],ft_atoi(argv[3]));
	original =	strncmp(argv[1],argv[2],ft_atoi(argv[3]));
	printf("para la cadena '%s' y la cadena '%s'\n", argv[1], argv[2]);
	printf("la funcion original devuelve: %d\n", original );
	printf("mi funcion          devuelve: %d\n", my);
*/	
	my =  ft_strncmp("abcdef", "abc\375xx", 5);
	original = strncmp("abcdef", "abc\375xx", 5);
	printf("para la cadena 'abcdef' y la cadena 'abc\\375'\n");
	printf("la funcion original devuelve: %d\n", original );
	printf("mi funcion          devuelve: %d\n", my);
	

	


	return (0);
}

