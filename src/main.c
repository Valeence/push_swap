/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 17:27:44 by vandre            #+#    #+#             */
/*   Updated: 2024/02/01 03:13:52 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char		**split_argv;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	if (argc == 2)
	{	
		split_argv = ft_split(argv[1], ' ');
		init_stack_a(&stack_a, split_argv, 0);
	}
	if (argc > 2)
		init_stack_a(&stack_a, argv, 1);
	if (stack_len(stack_a) == 2)
		sort_two(&stack_a);
	if (stack_len(stack_a) == 3)
		sort_three(&stack_a);
	if (stack_len(stack_a) > 3)
		radix_sort(&stack_a, &stack_b);
	free_stack(&stack_a, &stack_b);
}
