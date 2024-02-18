/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 01:01:10 by vandre            #+#    #+#             */
/*   Updated: 2024/02/16 01:01:42 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_two(t_stack **stack_a)
{
	if (!stack_a)
		return ;
	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a);
}

void	sort_three(t_stack **stack_a)
{
	t_stack	*biggest;

	biggest = find_max(*stack_a);
	if (biggest == *stack_a)
		ra(stack_a);
	else if ((*stack_a)->next == biggest)
		rra(stack_a);
	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a);
}

void sort_four(t_stack **stack_a, t_stack **stack_b)
{
    while (stack_len(*stack_a) > 3)
	{
        if ((*stack_a)->value == find_min(*stack_a)->value)
		{
            pb(stack_a, stack_b);
        } else {
            ra(stack_a);
        }
    }
    sort_three(stack_a);
    pa(stack_a, stack_b);
    if ((*stack_a)->value > (*stack_a)->next->value)
	{
        sa(stack_a);
    }
}

void sort_five(t_stack **stack_a, t_stack **stack_b)
{
    int i = 0;
    while (i < 2) {
        if ((*stack_a)->value == find_min(*stack_a)->value)
		{
            pb(stack_a, stack_b);
            i++;
        } else {
            ra(stack_a);
        }
    }
    sort_three(stack_a);
    while (stack_len(*stack_b) > 0)
	{
        pa(stack_a, stack_b);
        if ((*stack_a)->value > (*stack_a)->next->value)
		{
            sa(stack_a);
        }
    }
    if ((*stack_a)->value > (*stack_a)->next->value)
	{
        sa(stack_a);
    }
}
