/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:56:01 by vandre            #+#    #+#             */
/*   Updated: 2024/01/17 17:52:25 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/include/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_stack_node
{
	int					value;
	int					lindex;
	struct s_stack_node	*target;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}				t_stack_node;

void	init_stack_a(t_stack_node **stack_a, char **argv, int i);
void	check_argv(char	*str);
void	check_duplicate(t_stack_node *stack_a, int nb);
void	append_node(t_stack_node **stack, int nb);
int		stack_len(t_stack_node *stack);
int		is_sorted(t_stack_node **stack_a);

void	sort_two(t_stack_node **stack_a);
void	sort_three(t_stack_node **stack_a);
void	radix_sort(t_stack_node **stack_a, t_stack_node **stack_b);

t_stack_node	*find_last(t_stack_node *stack_a);
t_stack_node 	*find_max(t_stack_node *stack_a);

void	sa(t_stack_node	**stack_a);
void	sb(t_stack_node	**stack_b);
void	ss(t_stack_node	**stack_a, t_stack_node	**stack_b);
void	pa(t_stack_node	**stack_a, t_stack_node	**stack_b);
void	pb(t_stack_node	**stack_a, t_stack_node	**stack_b);
void	ra(t_stack_node	**stack_a);
void	rb(t_stack_node	**stack_b);
void	rr(t_stack_node	**stack_a, t_stack_node	**stack_b);
int		rra(t_stack_node	**stack_a);
int		rrb(t_stack_node	**stack_b);
int		rrr(t_stack_node	**stack_a, t_stack_node	**stack_b);

#endif