/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:25:57 by vandre            #+#    #+#             */
/*   Updated: 2024/01/30 17:13:22 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void free_argv(char **argv)
{
	int i;

	i = 0;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
}

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
		if (check_argv(argv[i]))
		{
			free_argv(argv);
			errors(stack_a);
			return ;
		}
		if (!ft_atoi(argv[i], &nb))
		{
			free(*argv);
			errors(stack_a);
			return ;
		}
		check_duplicate(*stack_a, nb);
		append_node(stack_a, nb);
		i++;
	}
	get_index(stack_a);
}
