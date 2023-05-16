/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarpent <scarpent@student.42lehavre.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 10:16:59 by scarpent          #+#    #+#             */
/*   Updated: 2023/01/22 15:15:45 by scarpent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_lines(int x, char a, char b, char c)
{
	int	j;

	j = 0;
	while (j < x)
	{
		if (j == 0)
			ft_putchar(a);
		else if (j == x - 1)
		{
			ft_putchar(c);
			break ;
		}
		else
			ft_putchar(b);
		j++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (i < y)
	{
		if (i == 0)
			ft_lines(x, '/', '*', '\\');
		else if (i == y - 1)
		{
			ft_lines(x, '\\', '*', '/');
			break ;
		}
		else
			ft_lines(x, '*', ' ', '*');
		i++;
	}
}
