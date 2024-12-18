/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 09:44:25 by guphilip          #+#    #+#             */
/*   Updated: 2024/08/22 11:28:52 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str_a[] = "TutorialsPoint";
// 	char	str_b[] = "Point";

// 	printf("Texte : %s\n", ft_strstr(str_a, str_b));
// 	printf("Source : %s\n", str_a);
// 	printf("To Find : %s\n", str_b);
// }
