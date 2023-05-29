/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurcbar <dkurcbar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:52:35 by dkurcbar          #+#    #+#             */
/*   Updated: 2023/05/08 16:17:47 by dkurcbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<ctype.h>
#include<string.h>
#include"ft_bzero.c"


int main(int args, char **argv)
{
	char *str1;
	char *str2;
	int i;


	str1 = (char *) malloc (sizeof(char) *  20);
	str2 = (char *) malloc (sizeof(char) *  20);

	while (argv[1][i])
	{
		str1[i] = argv[1][i];
		str2[i] = str1[i];
		i++;
	}
	str1[i] = '\0';
	str2[i] = '\0';
	printf("cadena original: %s\n", str1);
	bzero(str1, 3);
	printf("pasa\n");
	ft_bzero(str2, 3);
	printf("pasa\n");
	printf("funcion original"); 
	write(1,str1,20);
	write(1,"\n",1);
	printf("Mi funcion hace  \n%s\n",str2);
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
