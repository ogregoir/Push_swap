# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ogregoir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/19 11:22:18 by ogregoir          #+#    #+#              #
#    Updated: 2023/03/19 11:22:20 by ogregoir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	srcs/parsing.c \
			utils/ft_swap.c \
			utils/ft_push.c \
			srcs/main.c \
			utils/ft_lst_utils.c \
			utils/ft_rotate.c \
			utils/ft_rotate_reverse.c \
			utils/ft_indexage.c \
			srcs/algo.c \
			srcs/algo2.c \
			utils/ft_verifications.c \

SRCS_B	=	bonus/srcs/parsing.c \
			bonus/utils/ft_swap.c \
			bonus/utils/ft_push.c \
			bonus/srcs/main.c \
			bonus/utils/ft_lst_utils.c \
			bonus/utils/ft_rotate.c \
			bonus/utils/ft_rotate_reverse.c \
			bonus/utils/ft_verifications.c \
			bonus/utils/get_next_line_utils.c \
			bonus/utils/get_next_line.c \
			
OBJS	=	$(SRCS:.c=.o)

OBJS_B	=	$(SRCS_B:.c=.o)

NAME	=	push_swap

NAME_B	=	checker

RM		=	rm -f

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

LIBFT	=	libft/libft.a

#-------------------------------------------#

all	:	$(NAME)

$(NAME)	: $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

bonus	: $(LIBFT) $(OBJS_B)
	$(CC) $(CFLAGS) $(OBJS_B) $(LIBFT) -o $(NAME_B)

clean	:
	$(RM)   $(OBJS) $(OBJS_B)
	make clean -C libft

fclean : clean
	$(RM) $(NAME)
	$(RM) $(NAME_B)
	$(RM) $(LIBFT)

$(LIBFT) :
	make -C libft

re	: fclean all