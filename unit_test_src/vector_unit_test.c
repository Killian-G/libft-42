/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_unit_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 11:02:55 by kguibout          #+#    #+#             */
/*   Updated: 2020/05/30 21:35:20 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"

static void	print_vector_uint64(t_vector *vector, char *variable_name)
{
	size_t	i;
	t_u64	*content;

	content = vector->items;
	ft_printf("%s = ", variable_name);
	i = 0;
	while (i < vector->total)
	{
		if (i != vector->total - 1)
			ft_printf("%lu | ", content[i]);
		else
			ft_printf("%lu\n", content[i]);
		++i;
	}
}

void		run_vector_unit_test(void)
{
	t_vector	vector;
	t_u64		number;
	t_u64		index;
	size_t		i;

	vector_init(&vector, sizeof(t_u64));
	i = 0;
	while (i < 10)
	{
		number = i * 2;
		vector_push(&vector, &number);
		i++;
	}
	print_vector_uint64(&vector, GET_VARIABLE_NAME(vector));
	number = 100;
	index = 0;
	ft_printf("Insert %lu at index %lu\n", number, index);
	vector_insert(&vector, index, &number);
	print_vector_uint64(&vector, GET_VARIABLE_NAME(vector));
	number = 200;
	index = vector.total;
	ft_printf("Insert %lu at index %lu\n", number, index);
	vector_insert(&vector, index, &number);
	print_vector_uint64(&vector, GET_VARIABLE_NAME(vector));
}
