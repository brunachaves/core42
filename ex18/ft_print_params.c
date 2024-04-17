/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brchaves <brchaves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:08:09 by brchaves          #+#    #+#             */
/*   Updated: 2024/04/16 12:21:21 by brchaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	new_line;

	i = 1;
	new_line = '\n';
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar(new_line);
		i++;
	}
	return (0);
}
