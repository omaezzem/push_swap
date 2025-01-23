# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/21 11:05:01 by omaezzem          #+#    #+#              #
#    Updated: 2025/01/23 17:08:44 by omaezzem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

MAIN_SOURCES =  modify_list/ft_last.c modify_list/ft_lst_addfront.c modify_list/ft_lstadd_back.c modify_list/ft_lstclear.c modify_list/ft_lstnew.c modify_list/ft_lstsize.c modify_list/get_bottom.c \
sort/do_px.c sort/do_rrx.c sort/do_rx.c sort/do_sx.c sort/foor_five_norm.c sort/reverse_rotate.c sort/rotate.c sort/sort_morefive.c sort/sorting.c \
src/checkone.c src/double.c src/indexing.c src/morethantwo.c src/push_swp.c src/scanone.c src/utilis.c \
utils/ft_atoi.c utils/ft_strlcpy.c utils/ft_strlen.c utils/split.c

# BFILES = 

MAIN_OBJECTS = $(MAIN_SOURCES:.c=.o)

all : $(NAME)

$(NAME) : $(MAIN_OBJECTS)
	$(CC) $(CFLAGS) $(MAIN_OBJECTS) -o $(NAME)

%.o: %.c includes/push_swap.h
	$(CC) -c $(CFLAGS) $< -o $@

clean :
	@rm -f $(MAIN_OBJECTS) $(MAIN_BOBJECTS)

fclean : clean
	@rm -f $(NAME)

re : fclean all
