/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 02:33:19 by vandre            #+#    #+#             */
/*   Updated: 2024/01/15 15:25:32 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	check_argv(char	*str)
{
	int	i;

	i = 0;
	if (!str)
		return ;
	if (str[i] == '-' || (str[i] >= '0' && str[i] <= '9'))
	{
		i++;
		if (str[0] == '-' && str[1] == '\0')
			return (ft_printf("Error\n"), exit(1));
		while (str[i])
		{
			if (!ft_isdigit(str[i]))
				return (ft_printf("Error\n"), exit(1));
			i++;
		}
	}
	else
		return (ft_printf("Error\n"), exit(1));
}

void	check_duplicate(t_stack_node *stack_a, int nb)
{
	if (!stack_a)
		return ;
	while (stack_a)
	{
		if ((stack_a)->value == nb)
			return (ft_printf("Error\nDuplicate arg"), exit(1));
		stack_a = (stack_a)->next;
	}
	return ;
}
