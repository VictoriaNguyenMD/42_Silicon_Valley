/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 21:24:10 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/23 23:26:03 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **ptr, int (*f)(char*))
{
	int count;

	count = 0;
	while (**ptr)
	{
		if (f(*ptr) == 1)
		{
			count++;
		}
		(*ptr)++;
	}
	return (count);
}
