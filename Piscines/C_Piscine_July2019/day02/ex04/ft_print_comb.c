/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 21:46:01 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/11 23:17:24 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	int n[3];

	n[0] = 0;
	while (n[0] <= 7)
	{
		n[1] = n[0];
		while (++n[1] <= 8)
		{
			n[2] = n[1];
			while (++n[2] <= 9)
			{
				ft_putchar(n[0] + '0');
				ft_putchar(n[1] + '0');
				ft_putchar(n[2] + '0');
				if (!(n[0] == 7 && n[1] == 8 && n[2] == 9))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			n[2] = n[1] + 1;
		}
		n[0]++;
		n[1] = n[0] + 1;
	}
}
