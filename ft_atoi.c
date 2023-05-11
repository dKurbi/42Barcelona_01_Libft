/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkurcbar <dkurcbar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:14:44 by dkurcbar          #+#    #+#             */
/*   Updated: 2023/05/11 17:52:57 by dkurcbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	initnum(const char *str)
{
	int	i;

	i = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == ' ')
		i++;
	return (i);
}

int	c_sign(const char *str, int i)
{
	if (str[i] == '-' && ft_isdigit(str[i + 1]))
		return (-1);
	else if (str[i] == '+' && ft_isdigit(str[i + 1]))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	number;
	int	sign;

	i = initnum(str);
	number = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
		{
			sign = c_sign(str, i);
			if (sign == 0)
				return (0);
		}
		else
		{
			if ((number >= 214748364) && ((str[i] - '0') > 7))
			{
				if (sign > 0)
					return (2147483647);
				else
					return (-2147483648);
			}
			else
				number = (number * 10) + (str[i] - '0');
			if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
				return (number * sign);
		}
	i++;
	}
	return (number * sign);
}
