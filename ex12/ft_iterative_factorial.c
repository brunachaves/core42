/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brchaves <brchaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:18:46 by brchaves          #+#    #+#             */
/*   Updated: 2024/04/17 14:10:09 by brchaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	aux_nb;

	result = 1;
	aux_nb = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (aux_nb >= 1)
	{
		result *= aux_nb;
		aux_nb--;
	}
	return (result);
}
