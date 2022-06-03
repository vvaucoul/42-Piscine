/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 19:46:08 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/07 19:50:25 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int j;

	if (argc < 2)
		return (0);
	j = 1;
	i = 0;
	while (argv[j])
	{
		while (argv[j][i])
		{
			ft_putchar(argv[j][i]);
			++i;
		}
		ft_putchar('\n');
		i = 0;
		++j;
	}
	return (0);
}
