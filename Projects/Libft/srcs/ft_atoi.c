/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 22:04:13 by vinguyen          #+#    #+#             */
/*   Updated: 2019/09/19 20:37:04 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi (const char *str)
{
	int sign;
	int output;
   
	sign = 1;
	output = 0;
	while ((*str == ' ') || (*str == '\t') || (*str == '\v') ||
	(*str == '\n') || (*str == '\f') || (*str == '\r')) 
	{
		str++;
	}
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	if (*str == '+')
	{
		str++;
	}
	while ((*str >= '0' && *str <= '9'))
	{
		output = (output * 10) + (*str++ - '0');
	}	
	return output * sign;
}
