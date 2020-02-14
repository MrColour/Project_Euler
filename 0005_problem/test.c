/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 13:11:09 by kmira             #+#    #+#             */
/*   Updated: 2020/02/14 13:36:35 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int aa, char **args)
{
	int	i;
	int	test;
	int	stop;

	i = 1;
	if (aa == 3)
	{
		stop = atoi(args[1]);
		test = atoi(args[2]);
		while (i < stop)
		{
			if (test % i != 0)
			{
				printf("Error! %d\n", i);
				return (0);
			}
			i++;
		}
		printf("Passed!\n");
	}
	else
		printf("ENOMSG\n");
	return (0);
}
