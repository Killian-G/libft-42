/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_test.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 14:16:44 by kguibout          #+#    #+#             */
/*   Updated: 2020/05/30 21:31:53 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNIT_TEST_H
# define UNIT_TEST_H

# define GET_VARIABLE_NAME(Variable) (#Variable)

# include "libft.h"

void	run_dlist_unit_test(void);
void	run_vector_unit_test(void);
void	run_async_unit_test(void);

#endif
