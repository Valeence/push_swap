/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 19:54:22 by vandre            #+#    #+#             */
/*   Updated: 2024/01/16 23:57:27 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_two(t_stack_node **stack_a)
{
	if (!stack_a)
		return ;
	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a);
}
