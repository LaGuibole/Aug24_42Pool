/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:15:31 by guphilip          #+#    #+#             */
/*   Updated: 2024/08/27 17:00:47 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	size;

	size = max - min;
	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(int) * size);
	if (tab == NULL)
		return (NULL);
	size = 0;
	while (min < max)
	{
		tab[size] = min;
		min++;
		size++;
	}
	return (tab);
}

// int	main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*tab;

// 	int	i = 0;
// 	int	size;

// 	min = 5;
// 	max = 90;
// 	size = max - min;
// 	tab = ft_range(min, max);
// 	while (i < size)
// 	{
// 		printf("%d, ", tab[i]);
// 		i++;
// 	}
// }
