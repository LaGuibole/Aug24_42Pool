/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:25:20 by guphilip          #+#    #+#             */
/*   Updated: 2024/08/26 12:26:47 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i != power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

// int	main(void)
// {
// 	ft_iterative_power(2, 2);
// 	printf("%d\n", ft_iterative_power(5, 5));
// }
