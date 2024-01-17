/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:43:29 by vandre            #+#    #+#             */
/*   Updated: 2024/01/17 16:59:54 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	do_rra_or_rrb(t_stack_node **stack)
{
	t_stack_node	*prev_last;
	t_stack_node	*last;

	if (!*stack || !(*stack)->next)
		return ;
	prev_last = NULL;
	last = *stack;
	while (last->next)
	{
		prev_last = last;
		last = last->next;
	}
	if (prev_last)
		prev_last->next = NULL;
	last->next = *stack;
	*stack = last;
}

int	rra(t_stack_node **stack)
{
	if (!*stack || !(*stack)->next)
		return (-1);
	do_rra_or_rrb(stack);
	ft_printf("rra\n");
	return (0);
}

int	rrb(t_stack_node **stack)
{
	if (!*stack || !(*stack)->next)
		return (-1);
	do_rra_or_rrb(stack);
	ft_printf("rrb\n");
	return (0);
}

int	rrr(t_stack_node **a, t_stack_node **b)
{
	rra(a);
	rrb(b);
	ft_printf("rrr\n");
	return (0);
}
