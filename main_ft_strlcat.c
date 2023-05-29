/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurcbar <dkurcbar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:39:46 by dkurcbar          #+#    #+#             */
/*   Updated: 2023/05/25 14:57:07 by dkurcbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include "libft.h"
#include "ft_strlcat.c"
#include "ft_strlen.c"

//size_t	ft_strlcat(char *dst, const char *src, size_t size);

int main(int args, char **argv)
{
	unsigned int ret2;
	unsigned int ret;
	int size;
	char *src;
	char *src2;
	char *dst;		
	char *dst2;
	int	i;

	i = 0;
	src = malloc(ft_strlen(argv[2]));
	src2 = malloc(ft_strlen(argv[2]));
	dst = malloc (ft_strlen(argv[1]));
	dst2 = malloc (ft_strlen(argv[1]));

	size = ft_atoi(argv[3]);
	while(argv[1][i++])
	{
		dst[i-1] = argv[1][i-1];
		dst2[i-1] = dst[i-1];
	}
	dst[i-1]= '\0';
	dst2[i-1]='\0';
	i = 0;

	while(argv[2][i++])
	{
		src[i-1] = argv[2][i-1];
		src2[i-1] = src[i-1];
	}
	src[i-1]=src2[i-1]='\0';

	printf("la cadena '%s', y la cadena '%s', concatenada con size '%u' devuelve:\n",dst,src,size);
	ret = ft_strlcat(dst,src,size);
	printf("en mi funcion		    	: '%s', y devuelve '%u'\n",dst,ret);
	ret2 = strlcat(dst2,src2,size);
	printf("en la funcion original		: '%s', y devuelve '%u'\n",dst2,ret2);
	return (0);
}
