/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurcbar <dkurcbar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:25:42 by dkurcbar          #+#    #+#             */
/*   Updated: 2023/06/12 14:02:30 by dkurcbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void manual(int cas)
{
	switch (cas){
		case 1:
			printf("El main del split recibe una cadena de caracteres como argumentos,\n");
			printf("seguido por el caracter separador\n");
			printf("./split \"cadena a separar\" \" \"\n");
	}
}	
			
int main(int args, char **argv)
{
	char *s = argv[1];
	char c = argv[2][0];
	char **split;
	int i;

	if (args == 1)
	{
		manual(1);
		return (0);
	}
	split = ft_split(s,c);
	i = 0;
	while (split[i])
	{
		printf("la palabra %d es: '%s'\n", i, split[i]);
	i++;
	}
	free (split);

	return (0);
}


