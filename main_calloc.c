/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurcbar <dkurcbar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:04:06 by dkurcbar          #+#    #+#             */
/*   Updated: 2023/05/24 17:18:50 by dkurcbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int main(void)
{
	char *str;
	int i = 0;

//	write (1,&str,12);
 //	write  (1,"\n",1);	
	printf("en la direccion '%p', esta escrito '%s'\n", str, str);
	str = "1234567890123456789012345678901234567890";
	printf("en la direccion '%p', esta escrito '%s'\n", str, str);
	str=ft_calloc(40, 1);

	printf("en la direccion '%p', esta escrito '%s'\n", str, str);
	printf ("luego del calloc\n en la direccion '%p', esta escrito '\n ", str);
	while ( i < 40)
	{
		write(1,&str[i], 1);
		if (str[i] != '\0')
		{	
			printf("ERROR");
			return (1);
		}
		i++;
	}
	free(str);

	int *b;
	i= 0;

	b = malloc(5000000 * 4);
	while (i < 5000000)
	{
		if (b[i] != 0)
			printf ("en la posicion %i hay '%i' en 'b'\n", i, b[i]);
		i++;
	}
	i = 0;
	while ( i < 5000000)
	{
		b[i] = 2;
		printf("%i\n",b[i]);
		i++;
	}

	b = malloc(5000000 * 4);
	i = 0;
	while (i < 5000000)
	{
		if (b[i] != '\0')
            printf("ERROR");
        i++;
	}	
		free(b);
	return (0);
}
