/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaniel- <vdaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 22:18:00 by vdaniel-          #+#    #+#             */
/*   Updated: 2021/07/30 22:18:01 by vdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = 0;
		if (i == 0)
			c = 1;
		else if (str[i - 1] < '0' || (str[i - 1] > '9' && str[i - 1] < 'A'))
			c = 1;
		else if ((str[i - 1] > 'Z' && str[i - 1] < 'a') || str[i - 1] > 'z')
			c = 1;
		else
			c = 0;
		if ((str[i] >= 'a' && str[i] < 'z') && c == 1)
			str[i] = str[i] - 32;
		if ((str[i] >= 'A' && str[i] < 'Z') && c == 0)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
