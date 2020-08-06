//
// Created by killian on 30/06/2020.
//

#include "libft.h"

void	*task1_func(void *param)
{
	t_clock			clock;
	float 			time;
	int 			last_time = 0;

	(void)param;
	clock_restart(&clock);
	while ((time = clock_get_seconds(&clock)) <= 5.f)
	{
		if (last_time != ceilf(time))
		{
			ft_printf("Thread time: %f\n", time);
			last_time = ceilf(time);
		}
	}
	ft_printf("Thread time: %f\n", time);
	return (NULL);
}

void	run_async_unit_test(void)
{
	t_async_task	*task1;
	t_clock			clock;
//	int 			last_time = 0;

	task1 = create_async_task(task1_func, NULL);

	clock_restart(&clock);
	while (1)
	{
		if (async_is_finish(task1, NULL))
			break ;
		ft_printf("Test");
		usleep(1000000);
		pthread_cancel(task1->tread_id);
		pthread_join(task1->tread_id, NULL);
		destroy_async_task(&task1);
		break;
	}
}