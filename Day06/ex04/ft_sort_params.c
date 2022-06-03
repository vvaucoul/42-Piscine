/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 20:01:53 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/08 02:01:20 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_tab(char **tab)
{
	int j;
	int i;

	j = 1;
	i = 0;
	while (tab[j])
	{
		while (tab[j][i])
		{
			ft_putchar(tab[j][i]);
			++i;
		}
		ft_putchar('\n');
		i = 0;
		++j;
	}
}

int		test_swap(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		++i;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*tempo;

	if (argc < 2)
		return (0);
	i = 0;
	j = 1;
	k = 0;
	while (argv[j + 1])
	{
		if (test_swap(argv[j], argv[j + 1]) > 0)
		{
			tempo = argv[j];
			argv[j] = argv[j + 1];
			argv[j + 1] = tempo;
			j = 1;
		}
		else
			++j;
	}
	print_tab(argv);
	return (0);
}
