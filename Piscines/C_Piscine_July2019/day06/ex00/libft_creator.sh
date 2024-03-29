# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/17 22:05:50 by vinguyen          #+#    #+#              #
#    Updated: 2019/07/17 22:10:14 by vinguyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -Wall -Wextra -Werror -c *.c
ar rc libft.a *.o
ranlib libft.a
rm ft_*.o
