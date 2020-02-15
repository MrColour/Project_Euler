/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0006_problem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 21:19:25 by kmira             #+#    #+#             */
/*   Updated: 2020/02/14 23:26:23 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int aa, char **args)
{
	long	degree1_sum;
	long	degree2_sum;
	long	num;
	long	answer;

	if (aa == 2)
	{
		num = atoi(args[1]);
		degree1_sum = ((num + 1) * num) / 2;
		degree2_sum = (2 * num * num * num + 3 * num * num + num) / 6;
		answer = (degree1_sum) * (degree1_sum) - degree2_sum;
		printf("Answer: %ld\n", answer);
	}
	else
		printf("ENOMSG\n");
	return (0);
}
