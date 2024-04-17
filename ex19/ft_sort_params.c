/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brchaves <brchaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:27:09 by brchaves          #+#    #+#             */
/*   Updated: 2024/04/17 14:29:12 by brchaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_print_str(char *str)
{
	int		i;
	char	new_line;

	i = 0;
	new_line = '\n';
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar(new_line);
}

void	sort_argv(char **argv, int argc)
{
	int		compare;
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			compare = ft_strcmp(argv[i], argv[j]);
			if (compare > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc <= 1)
		return (0);
	else if (argc == 2)
		ft_print_str(argv[1]);
	else
	{
		sort_argv(argv, argc);
		i = 1;
		while (i < argc)
		{
			ft_print_str(argv[i]);
			i++;
		}
	}
	return (0);
}
