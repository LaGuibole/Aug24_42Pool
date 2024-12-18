/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 18:16:38 by guphilip          #+#    #+#             */
/*   Updated: 2024/08/19 15:18:07 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (! (str[i] >= 48 && str[i] <= 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_numeric("1"));
// 	printf("%d\n", ft_str_is_numeric("abcd"));
// 	printf("%d\n", ft_str_is_numeric("abcd15"));
// 	printf("%d\n", ft_str_is_numeric("2"));
// 	printf("%d\n", ft_str_is_numeric(""));
// }
