/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 21:19:56 by kmira             #+#    #+#             */
/*   Updated: 2020/02/14 21:23:10 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int aa, char **args)
{
	int	i;
	int	sum;
	int	stop;

	if (aa == 2)
	{
		i = 0;
		sum = 0;
		stop = atoi(args[1]);
		while (i < stop)
		{
			sum += i * i;
			i++;
		}
		printf("SUM: %d\n", sum);
	}
	else
		printf("ENOMSG\n");
	return (0);
}
