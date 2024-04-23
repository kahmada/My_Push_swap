/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_4_5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:04:37 by kahmada           #+#    #+#             */
/*   Updated: 2024/04/22 17:06:15 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stack **a)
{
	if (((*a)->index > (*a)->next->index)
		&& ((*a)->index > (*a)->next->next->index))
	{
		ra(a);
		if (check_is_sorted(*a) == 0)
			sa(a);
	}
	else if (((*a)->index < (*a)->next->index)
		&& ((*a)->next->index > (*a)->next->next->index))
	{
		rra(a);
		if (check_is_sorted(*a) == 0)
			sa(a);
	}
	else
		sa(a);
}

void	sort_4(t_stack **a, t_stack **b)
{
	while (stack_size(*a) > 3)
	{
		if (((*a)->index) >= 1)
			ra(a);
		else
			pb(a, b);
	}
	sort_3(a);
	pa(a, b);
}

void	sort_5(t_stack **a, t_stack **b)
{
	while (stack_size(*a) > 3)
	{
		if (((*a)->index) >= 2)
		{
			ra(a);
		}	
		else
			pb(a, b);
	}
	sort_3(a);
	if (check_is_sorted(*b) == 1)
	{
		sb(b);
	}
	pa(a, b);
	pa(a, b);
}
