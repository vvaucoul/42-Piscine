/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 13:42:47 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/12 22:58:35 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match_2(char *s1, char *s2, int *i, int *j)
{
	char c;

	if (s2[j[0]] == '*')
	{
		if (s2[j[0] + 1] == '\0')
			return (1);
		c = s2[j[0] + 1];
		++j[0];
		while (s1[i[0]] != c)
		{
			if (s1[i[0]] == '\0')
				return (0);
			++i[0];
		}
	}
	return (1);
}

int		match(char *s1, char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i] || s2[j])
	{
		if (match_2(s1, s2, &i, &j) == 0)
			return (0);
		if (s1[i] != s2[j])
			return (0);
		else
		{
			++i;
			++j;
		}
	}
	return (1);
}
