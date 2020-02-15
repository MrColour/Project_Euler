# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmira <kmira@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/08 10:45:56 by xinu              #+#    #+#              #
#    Updated: 2020/02/14 21:19:19 by kmira            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

fclean:
	make fclean -C 0001_problem
	make fclean -C 0002_problem
	make fclean -C 0003_problem
	make fclean -C 0004_problem
	make fclean -C 0005_problem
	make fclean -C 0006_problem

save: fclean
	git add .
	git commit -m "msg: $(MSG)"
	git push
