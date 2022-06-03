/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 13:03:06 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/09 11:43:35 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

void	init_check_param(int *i, int *si, int *valid)
{
	*i = 0;
	*si = 0;
	*valid = 0;
}

int		check_param(char *base)
{
	int i;
	int si;
	int base_size;
	int valid;

	init_check_param(&i, &si, &valid);
	if ((base_size = ft_strlen(base)) <= 1)
		return (0);
	while (valid != 1)
	{
		if ((base[si] != base[i + 1]))
			++i;
		else
			return (0);
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (i == base_size)
		{
			++si;
			i = si;
		}
		if (si == base_size)
			valid = 1;
	}
	return (1);
}

void	print_base(char *str)
{
	int i;

	i = ft_strlen(str);
	if (str[0] == '-')
		ft_putchar('-');
	while (i >= 0 && str[i] != '+' && str[i] != '-')
	{
		ft_putchar(str[i]);
		--i;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		size_base;
	char	value[500];

	if (check_param(base) == 0)
		return ;
	i = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		value[0] = '-';
		i = 1;
	}
	size_base = ft_strlen(base);
	while (nbr > 0)
	{
		if (nbr % size_base > 9)
			value[i] = (nbr % size_base) + 48 + 7;
		else
			value[i] = (nbr % size_base) + 48;
		nbr /= size_base;
		++i;
	}
	value[i] = '\0';
	print_base(value);
}
