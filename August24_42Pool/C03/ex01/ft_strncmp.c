/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:46:47 by guphilip          #+#    #+#             */
/*   Updated: 2024/08/22 11:35:33 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n <= 0)
		return (0);
	i = 0;
	while ((s1[i] && s1[i] == s2[i]) && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>
// #include <assert.h>
// int	main(void)
// {
// 	char	s2[] = "Bonjo";
// 	char	s1[] = "Bonjou";

// 	printf("%d\n", ft_strncmp(s1, s2, 5));
// 	assert(ft_strncmp(s1, s2, '5') == strncmp(s1, s2, '5'));
// }
