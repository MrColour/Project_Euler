/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0009_problem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 15:08:10 by xinu              #+#    #+#             */
/*   Updated: 2021/05/05 15:26:50 by xinu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int aa, char **args)
{
	int	a;
	int	b;
	int	c;
	int	to;

	if (aa == 2)
	{
		a = 1;
		to = atoi(args[1]);
		while (a < to)
		{
			b = a + 1;
			while (b < to)
			{
				c = b + 1;
				while (c * c < (a * a + b * b))
				{
					c++;
				}
				if (a + b + c == to && a * a + b * b == c * c)
					printf("Answer: %d, %d, %d %d\n", a*b*c, a, b, c);
				b++;
			}
			a++;
		}
	}
	else
		printf("ENOMSG\n");

	return(0);
}
