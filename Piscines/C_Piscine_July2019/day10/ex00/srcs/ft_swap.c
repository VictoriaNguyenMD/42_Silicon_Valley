/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 13:23:28 by elee              #+#    #+#             */
/*   Updated: 2019/07/23 05:50:36 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int a_temp;
	int b_temp;

	a_temp = *a;
	b_temp = *b;
	*a = b_temp;
	*b = a_temp;
}
