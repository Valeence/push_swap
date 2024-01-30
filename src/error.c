/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 02:33:19 by vandre            #+#    #+#             */
/*   Updated: 2024/01/30 17:07:16 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_argv(char	*str)
{
	int	i;

	i = 0;
	if (!str)
		return (1);
	if (str[i] == '-' || (str[i] >= '0' && str[i] <= '9'))
	{
		i++;
		if (str[0] == '-' && str[1] == '\0')
			return (1);
		while (str[i])
		{
			if (!ft_isdigit(str[i]))
				return (1);
			i++;
		}
	}
	else
		return (1);
	return (0);
}

void	check_duplicate(t_stack_node *stack_a, int nb)
{
	if (!stack_a)
		return ;
	while (stack_a)
	{
		if ((stack_a)->value == nb)
			return (ft_printf("Error\n"), errors(&stack_a));
		stack_a = (stack_a)->next;
	}
	return ;
}

void	free_stack(t_stack_node **stack_a, t_stack_node **stack_b)
{
	t_stack_node	*tmp;

	if (!stack_a || !stack_b)
		return ;
	while (*stack_a)
	{
		tmp = (*stack_a)->next;
		free(*stack_a);
		*stack_a = tmp;
	}
	while (*stack_b)
	{
		tmp = (*stack_b)->next;
		free(*stack_b);
		*stack_b = tmp;
	}
	*stack_a = NULL;
	*stack_b = NULL;
}

void	free_sa(t_stack_node **stack_a)
{
	t_stack_node	*tmp;

	if (!stack_a)
		return ;
	while (*stack_a)
	{
		tmp = (*stack_a)->next;
		free(*stack_a);
		*stack_a = tmp;
	}
	*stack_a = NULL;
}

void	errors(t_stack_node **stack_a)
{
	ft_printf("Error\n");
	free_sa(stack_a);
	exit(1);
}
