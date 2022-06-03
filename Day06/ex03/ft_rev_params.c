/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 19:51:00 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/07 20:01:17 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		tablen(char **tab)
{
	int j;

	j = 0;
	while (tab[j])
		++j;
	--j;
	return (j);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	if (argc < 2)
		return (0);
	j = tablen(argv);
	i = 0;
	while (j > 0)
	{
		while (argv[j][i])
		{
			ft_putchar(argv[j][i]);
			++i;
		}
		ft_putchar('\n');
		i = 0;
		--j;
	}
	return (0);
}
