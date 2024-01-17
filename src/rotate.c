/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 03:29:29 by vandre            #+#    #+#             */
/*   Updated: 2024/01/16 00:25:56 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ra(t_stack_node **stack_a)
{
	t_stack_node	*tmp;
	t_stack_node	*last;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	last = find_last(*stack_a);
	last->next = tmp;
	tmp->next = NULL;
	ft_printf("ra\n");
}

void	rb(t_stack_node **stack_b)
{
	t_stack_node	*tmp;
	t_stack_node	*last;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	last = find_last(*stack_b);
	last->next = tmp;
	tmp->next = NULL;
	ft_printf("rb\n");
}

void	rr(t_stack_node **stack_a, t_stack_node **stack_b)
{
	ra(stack_a);
	rb(stack_b);
	ft_printf("rr\n");
}
