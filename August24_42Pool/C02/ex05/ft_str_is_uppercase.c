/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 19:30:34 by guphilip          #+#    #+#             */
/*   Updated: 2024/08/19 15:18:05 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (! (str[i] <= 90 && str[i] >= 65))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_uppercase("AAA"));
// 	printf("%d\n", ft_str_is_uppercase("aaa"));
// 	printf("%d\n", ft_str_is_uppercase("aAa"));
// 	printf("%d\n", ft_str_is_uppercase("aAa123"));
// 	printf("%d\n", ft_str_is_uppercase("BBB"));
// }
