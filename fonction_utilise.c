/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction_utilise.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:22:32 by kahmada           #+#    #+#             */
/*   Updated: 2024/04/16 17:59:40 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstlast(t_stack *lst)
{
	if (lst == NULL)
	{
		return (NULL);
	}
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

void	indexing(t_stack **stacka)
{
	t_stack	*curr;
	t_stack	*tmp;
	int		i;

	curr = *stacka;
	i = 0;
	while (curr)
	{
		tmp = *stacka;
		while (tmp)
		{
			if (curr->content > tmp->content)
				i++;
			tmp = tmp->next;
		}
		curr->index = i;
		curr = curr->next;
		i = 0;
	}
}

int	stack_size(t_stack *stack)
{
	int	size;

	size = 0;
	while (stack)
	{
		size++;
		(stack) = (stack)->next;
	}
	return (size);
}

int	check_is_sorted(t_stack *stack)
{
	if (!stack)
		return (1);
	while (stack->next)
	{
		if (stack->content > stack->next->content)
			return (0);
		stack = stack->next;
	}
	return (1);
}
