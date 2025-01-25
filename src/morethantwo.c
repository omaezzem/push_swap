/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   morethantwo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 11:08:17 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/23 17:50:19 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_chck_morethantwo(char **av, int i)
{
	int		k;
	char	**morethantwo;

	k = 0;
	morethantwo = ft_split(av[i], ' ');
	while (morethantwo[k])
	{
		if (!checker(morethantwo[k]))
		{
			write (1, "Error\n", 6);
			free_memory(morethantwo);
			exit(1);
		}
		k++;
	}
	free_memory(morethantwo);
}
