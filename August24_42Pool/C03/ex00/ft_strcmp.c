/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:47:21 by guphilip          #+#    #+#             */
/*   Updated: 2024/08/22 09:10:17 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// int main(void)
// {
//     char    *s1;
//     char    *s2;

//     s1 = "Bonjour je m'appelle Guillaume";
//     s2 = "Bonjour je m'appelle Guillaum";

//     printf("%d\n", ft_strcmp(s1, s2));

// }
