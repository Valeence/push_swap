/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:25:57 by vandre            #+#    #+#             */
/*   Updated: 2024/01/21 18:25:03 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	append_node(t_stack_node **stack_a, int nb)
{
	t_stack_node	*node;
	t_stack_node	*last_node;

	if (!stack_a)
		return ;
	node = malloc(sizeof(t_stack_node));
	if (!node)
		return ;
	node->next = NULL;
	node->value = nb;
	if (!(*stack_a))
	{
		*stack_a = node;
		node->prev = NULL;
	}
	else
	{
		last_node = find_last(*stack_a);
		last_node->next = node; 
		node->prev = last_node;
	}
}

void	init_stack_a(t_stack_node **stack_a, char **argv, int i)
{
	int	nb;

	while (argv[i])
	{
		check_argv(argv[i]);
		ft_atoi(argv[i], &nb);
		if (nb > INT_MAX || nb < INT_MIN)
			return (ft_printf("Error\n"), exit(1));
		check_duplicate(*stack_a, nb);
		append_node(stack_a, nb);
		i++;
	}
	get_index(stack_a);
}
