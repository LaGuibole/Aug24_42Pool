/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 09:10:13 by guphilip          #+#    #+#             */
/*   Updated: 2024/08/21 14:11:34 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] > 31 && str[i] < 127))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

// int	main(void)
// {
// 	char	c1, c2, *c3;

// 	c1 = 10;
// 	c2 = 35;
// 	c3 = "";
// 	printf("%d\n", ft_str_is_printable(&c1));
// 	printf("%d\n", ft_str_is_printable(&c2));
// 	printf("%d\n", ft_str_is_printable(c3));
// }
