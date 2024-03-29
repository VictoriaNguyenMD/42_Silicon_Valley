/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 06:31:22 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/23 06:37:54 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_foreach(int *tab, int length, void(*f)(int));
void ft_putnbr(int nb);

int		main(void)
{
	int tab[] = {1,2,3,4,5,6,7,8,9};
	ft_foreach(tab, 9, &ft_putnbr);
}
