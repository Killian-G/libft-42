/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kguibout <kguibout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 14:16:30 by kguibout          #+#    #+#             */
/*   Updated: 2020/02/06 11:14:59 by kguibout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"

void	print_usage(char *program_name)
{
	ft_printf("usage: %s [-dlist]\n", program_name);
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		print_usage(av[0]);
		return (1);
	}
	if (ft_strequ(av[1], "-dlist"))
		run_dlist_unit_test();
	else if (ft_strequ(av[1], "-vector"))
		run_vector_unit_test();
	else if (ft_strequ(av[1], "-async"))
		run_async_unit_test();
	else
		print_usage(av[0]);
	return (0);
}
