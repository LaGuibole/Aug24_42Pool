/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:11:03 by guphilip          #+#    #+#             */
/*   Updated: 2024/08/28 15:33:17 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;

	if (nb == 0)
		return (1);
	if (nb < 1)
		return (0);
	else
		i = nb * ft_recursive_factorial(nb - 1);
	return (i);
}

int main(void)
{
    printf("%d\n", ft_recursive_factorial(0));
}
