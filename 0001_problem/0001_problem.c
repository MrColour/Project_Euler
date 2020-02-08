/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0001_problem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 10:55:27 by xinu              #+#    #+#             */
/*   Updated: 2020/02/08 11:02:29 by xinu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int		main(int aa, char **args)
{
	int	end;
	int	result;
	int	attempt;

	if (aa == 2)
	{
		result = 0;
		attempt = 0;
		end = atoi(args[1]);
		while (attempt < end)
		{
			if (attempt % 3 == 0)
				result += attempt;
			else if (attempt % 5 == 0)
				result += attempt;
			attempt++;
		}
		printf("Answer: %d\n", result);
	}
	else
		printf("Not enough arguements\n");
	return (EXIT_SUCCESS);
}
