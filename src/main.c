/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 17:27:44 by vandre            #+#    #+#             */
/*   Updated: 2024/01/30 17:02:51 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack_node	*stack_a;
	t_stack_node	*stack_b;
	int				i;

	i = 1;
	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	if (argc == 2)
	{	
		argv = ft_split(argv[1], ' ');
		i = 0;
	}
	init_stack_a(&stack_a, argv, i);
	if (stack_len(stack_a) == 2)
		sort_two(&stack_a);
	if (stack_len(stack_a) == 3)
		sort_three(&stack_a);
	if (stack_len(stack_a) > 3)
		radix_sort(&stack_a, &stack_b);
	free_stack(&stack_a, &stack_b);
}
