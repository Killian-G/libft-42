/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_unit_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 13:37:24 by kguibout          #+#    #+#             */
/*   Updated: 2020/05/30 21:31:40 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"

static void	print_dlist_uint64(t_dlist_handler *handler, char *variable_name)
{
	t_dlist	*current;

	current = handler->head;
	ft_printf("%s = ", variable_name);
	while (current)
	{
		if (current != handler->tail)
			ft_printf("%lu |", *(t_u64 *)current->content);
		else
			ft_printf("%lu\n", *(t_u64 *)current->content);
		current = current->next;
	}
}

void		run_dlist_unit_test(void)
{
	t_dlist_handler	*handler;
	t_dlist			*node;
	size_t			number;
	size_t			i;

	i = 0;
	handler = ft_dlist_create();
	while (i < 10)
	{
		number = i * 2;
		node = ft_dlistnew(&number, sizeof(number));
		ft_dlistaddend(handler, node);
		i++;
	}
	print_dlist_uint64(handler, GET_VARIABLE_NAME(handler));
	ft_dlistdelone(handler, handler->head, NULL);
	print_dlist_uint64(handler, GET_VARIABLE_NAME(handler));
	ft_dlistdelone(handler, handler->tail, NULL);
	print_dlist_uint64(handler, GET_VARIABLE_NAME(handler));
}
