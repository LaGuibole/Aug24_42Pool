/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 19:05:07 by guphilip          #+#    #+#             */
/*   Updated: 2024/08/19 15:18:06 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (! (str[i] >= 97 && str[i] <= 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_lowercase("AAA"));
// 	printf("%d\n", ft_str_is_lowercase("aaa"));
// 	printf("%d\n", ft_str_is_lowercase("aAa"));
// 	printf("%d\n", ft_str_is_lowercase("aAa156"));
// 	printf("%d\n", ft_str_is_lowercase("bbb"));
// }
