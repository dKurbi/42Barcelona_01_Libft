/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurcbar <dkurcbar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:09:42 by dkurcbar          #+#    #+#             */
/*   Updated: 2023/05/17 14:13:39 by dkurcbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int main (void)
{
	char	*rtn_o;
	char 	*rtn_m;
	char	*src = "aaxx";
	char	*f = "xx";
	
	printf("aaxx, xx, 2\n");
	rtn_o = strnstr(src, f, 2);
	rtn_m = ft_strnstr(src, f, 2);
	printf("la funcion O devuelve %s\n", rtn_o);
	printf("la funcion M devuelve %s\n", rtn_m);
	

	printf("22, b, 2\n");
	rtn_o = strnstr("22", "b", 2);
	rtn_m = ft_strnstr("22","b", 2);
	printf("la funcion O devuelve %s\n", rtn_o);
	printf("la funcion M devuelve %s\n", rtn_m);

	
	printf("aaxx, xx, 3\n");
	rtn_o = strnstr("aaxx", "xx", 3);
	rtn_m = ft_strnstr("aaxx", "xx", 3);
	printf("la funcion O devuelve %s\n", rtn_o);
	printf("la funcion M devuelve %s\n", rtn_m);
	
	printf("aaabcabcd, aabc, 3\n");
	rtn_o = strnstr("aaabcabcd", "aabc", 3);
	rtn_m = ft_strnstr("aaabcabcd", "aabc", 3);
	printf("la funcion O devuelve %s\n", rtn_o);
	printf("la funcion M devuelve %s\n", rtn_m);
	
	printf("123456789, 9, 8\n");
	rtn_o = strnstr("123456789", "9", 8);
	rtn_m = ft_strnstr("123456789", "9", 8);
	printf("la funcion O devuelve %s\n", rtn_o);
	printf("la funcion M devuelve %s\n", rtn_m);

	char haystack[30] = "aaabcabcd";
    char needle[10] = "aabc";

	printf("123456789, 9, 8\n");
	rtn_o = strnstr(haystack, needle, -1);
	rtn_m = ft_strnstr(haystack, needle, -1);
	printf("la funcion O devuelve %s\n", rtn_o);
	printf("la funcion M devuelve %s\n", rtn_m);

	return (0);
}
