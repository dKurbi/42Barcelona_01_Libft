/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurcbar <dkurcbar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:52:35 by dkurcbar          #+#    #+#             */
/*   Updated: 2023/05/03 18:10:35 by dkurcbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include"ft_memset.c"


int main(int args, char **argv)
{
	char str1[100];
	char str2[100];
	int i;

	i = 0;
	for (int a = 0; a < 100; a++)
	{
		str1[a] = ' ';
		str2[a] = ' ';
	}
	while (argv[1][i])
	{
		str1[i] = argv[1][i];
		str2[i] = str1[i];
		i++;
	}
	memset(argv[1],argv[2][0], argv[3][0] - 48);
	ft_memset(str2,argv[2][0], argv[3][0] - 48);
	printf("el valor original es \n%s\n mi funcion hace \n%s\n y la funcion original \n%s\n",str1,str2,argv[1]);
	return (0);
}




























/*iint ft_isprint(int c);
unsigned long (*mifuncion)(const char *str);
unsigned long (*otrafuncion)(const char *str);

#include <stdio.h>
#include <string.h>

int main(void) {

    char buffer[20];

	for (int i = 0; i < 20; i++)
		buffer[i]= i + 64;
    printf("buffer: %s\n", buffer);
	memset(buffer, 65, 10); // Establecer los primeros 10 bytes a cero
    printf("buffer: %s\n", buffer);

}


int main(int args, char **argv)
{
	char *str;
	mifuncion = &ft_strlen;
	otrafuncion = &strlen;

	str= argv[1];

	printf("mi funcion cuenta %lu caracteres, la original cuenta %lu \n",mifuncion(str), otrafuncion(str));
	return (0);;
}		
	
int main(int args, char **argv)
{
    mifuncion = &ft_isprint;
    otrafuncion = &isprint;

    for (int i = -10; i < 280; i++)
    {
        printf("para %d, la original devuelve: %d, la mia devuelve: %d\n",i,otrafuncion(i), mifuncion(i));
        if (mifuncion(i) != otrafuncion(i))
        {
            printf("ERROR!!!!! para %d el valor que devuelve es diferente", i);
            return (0);
        }
    }
    return (0);
}*/
