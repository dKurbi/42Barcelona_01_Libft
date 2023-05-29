/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurcbar <dkurcbar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:25:42 by dkurcbar          #+#    #+#             */
/*   Updated: 2023/05/29 17:28:36 by dkurcbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(int args, char **argv)
{
	char *s = argv[1];
	char c = argv[2][0];
	char **split;
	int i;

	split = ft_split(s,c);
	i = 0;
	while (i < 1)
	{
		printf("la palabra %d es: '%s'\n", i, split[i]);
	i++;
	}
	printf("la palabra %d es %p\n", i, split[i]);
	free (split);

	split = ft_split("           ", ' ');
	i = 0;
	while (split[i])
	{
		printf("la palabra %d es: '%s'\n", i, split[i]);
	i++;
	}
	free (split);

	return (0);
}


