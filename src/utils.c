/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 19:10:47 by vandre            #+#    #+#             */
/*   Updated: 2024/01/30 00:21:07 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	*find_last(t_stack *stack_a)
{
	if (!stack_a)
		return (NULL);
	while (stack_a->next)
		stack_a = stack_a->next;
	return (stack_a);
}

t_stack *find_max(t_stack *stack)
{
	t_stack *max;

	if (!stack)
		return (NULL);
	max = stack;
	while (stack)
	{
		if (stack->value > max->value)
			max = stack;
		stack = stack->next;
	}
	return (max);
}


int	stack_len(t_stack *stack)
{
	int i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

int	is_sorted(t_stack **stack_a)
{
	t_stack	*current;

	if (*stack_a == NULL)
		return (1);
	current = *stack_a;
	while (current->next)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}
