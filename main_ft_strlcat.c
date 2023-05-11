/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurcbar <dkurcbar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:39:46 by dkurcbar          #+#    #+#             */
/*   Updated: 2023/05/11 15:09:03 by dkurcbar         ###   ########.fr       */
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
	char src[20];
	char src2[20];
	char dst[20];		
	char dst2[20];
	int	i;

	i = 0;
	size = argv[3][0] - '0';
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

	printf("la cadena %s, y la cadena %s, concatenada con size %u devuelve:\n",argv[1],argv[2],size);
	ret = ft_strlcat(dst,src,size);
	printf("en mi funcion			: %s, y devuelve %u\n",dst,ret);
	ret2 = strlcat(dst2,src2,size);
	printf("en la funcion original		: %s, y devuelve %u\n",dst2,ret2);
	return (0);
}
