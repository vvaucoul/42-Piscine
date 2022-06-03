/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 14:02:24 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/03 12:15:06 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int left;
	int right;

	left = 0;
	while (left <= 99)
	{
		right = left + 1;
		while (right <= 99)
		{
			ft_putchar((left / 10) + 48);
			ft_putchar((left % 10) + 48);
			ft_putchar(' ');
			ft_putchar((right / 10) + 48);
			ft_putchar((right % 10) + 48);
			if (left != 98 || right != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			right++;
		}
		left++;
	}
}
