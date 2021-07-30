/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaniel- <vdaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 22:10:39 by vdaniel-          #+#    #+#             */
/*   Updated: 2021/07/30 22:10:40 by vdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, char e, char n)
{
	write(1, &c, 1);
	write(1, &e, 1);
	write(1, &n, 1);
	if (c == '7' && e == '8' && n == '9')
	{
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)

{
	int	n1;
	int	n2;
	int	n3;

	n1 = 0;
	while (n1 <= 7)
	{
		n2 = n1 + 1;
		while (n2 <= 8)
		{
			n3 = n2 + 1;
			while (n3 <= 9)
			{
				ft_putchar(n1 + 48, n2 + 48, n3 + 48);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}
