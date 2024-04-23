/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:28:37 by kahmada           #+#    #+#             */
/*   Updated: 2024/04/15 22:30:23 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_valid_arg(char *str_n)
{
	int	has_sign;

	has_sign = 0;
	if (*str_n == '+' || *str_n == '-')
	{
		has_sign = 1;
		str_n++;
	}
	while (*str_n)
	{
		if (!ft_isdigit(*str_n))
			return (1);
		str_n++;
	}
	if (has_sign && !ft_isdigit(*(str_n - 1)))
		return (1);
	return (0);
}

int	has_duplicates(t_stack *stack, int num)
{
	t_stack	*current;

	current = stack;
	if (!stack)
		return (0);
	while (current)
	{
		if (current->content == num)
		{
			return (1);
		}
		current = current->next;
	}
	return (0);
}
