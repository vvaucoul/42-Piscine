/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 14:02:24 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/03 11:47:33 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb_test(int *centaine, int *unite)
{
	if (centaine[0] < 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	++unite[0];
}

void	ft_print_comb_print(int centaine, int dizaine, int unite)
{
	ft_putchar(centaine + 48);
	ft_putchar(dizaine + 48);
	ft_putchar(unite + 48);
}

void	ft_print_comb(void)
{
	int unite;
	int dizaine;
	int centaine;

	unite = 0;
	centaine = 0;
	while (centaine < 10)
	{
		dizaine = centaine + 1;
		while (dizaine < 10)
		{
			unite = dizaine + 1;
			while (unite < 10)
			{
				ft_print_comb_print(centaine, dizaine, unite);
				ft_print_comb_test(&centaine, &unite);
			}
			unite = 0;
			++dizaine;
		}
		dizaine = 0;
		++centaine;
	}
}
