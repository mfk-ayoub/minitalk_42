# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/09 03:13:33 by ayel-mou          #+#    #+#              #
#    Updated: 2024/03/27 13:57:34 by ayel-mou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = server client
BONUS = server_bonus client_bonus
CFLAGS = -Wall -Wextra -Werror
CC = cc

CLIENT_SRC = ./mandatory/client.c
SERVER_SRC = ./mandatory/server.c

CLIENT_BO = ./bonus/client_bonus.c
SERVER_BO = ./bonus/server_bonus.c

CHELPER = 	./utlis/superlib.c \
			./utlis/putbanner.c \
			./ft_printf/ft_printf.c \
			./ft_printf/ft_putchr.c \
			./ft_printf/ft_putnbr.c \
			./ft_printf/ft_putstr.c \
			./ft_printf/ft_printhex.c \
			./ft_printf/ft_printHEX.c \
			./ft_printf/ft_printpoint.c \
			./ft_printf/ft_putundec.c \

CLIENT_OBJ = $(CHELPER:.c=.o) $(CLIENT_SRC:.c=.o)
SERVER_OBJ = $(CHELPER:.c=.o) $(SERVER_SRC:.c=.o)
CLIENT_OBJ_BON = $(CHELPER:.c=.o) $(CLIENT_BO:.c=.o)
SERVER_OBJ_BON = $(CHELPER:.c=.o) $(SERVER_BO:.c=.o)

all: $(NAME)

client: $(CLIENT_OBJ)
	@$(CC) $(CFLAGS) $(CLIENT_OBJ)   -o client
	@echo "\n✅ Client completed successfully! ✅"

server: $(SERVER_OBJ)
	@$(CC) $(CFLAGS) $(SERVER_OBJ)   -o server
	@echo "\n✅ Server completed successfully! ✅"

bonus: $(BONUS)

client_bonus: $(CLIENT_OBJ_BON)
	@$(CC) $(CFLAGS) $(CLIENT_OBJ_BON)   -o client_bonus
	@echo "\n✅ client_bonus completed successfully! ✅"

server_bonus: $(SERVER_OBJ_BON)
	@$(CC) $(CFLAGS) $(SERVER_OBJ_BON)  -o server_bonus
	@echo "\n✅ server_bonus completed successfully! ✅"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(CLIENT_OBJ) $(SERVER_OBJ) $(CLIENT_OBJ_BON) $(SERVER_OBJ_BON)
	@echo "🧹 ...Cleaned objects!... 🧹"

fclean: clean
	@$(RM) client server client_bonus server_bonus
	@echo "🧹...Cleaned client and server ... 🧹"

re: fclean all bonus

.SECONDARY : $(CLIENT_OBJ) $(SERVER_OBJ) $(CLIENT_OBJ_BON) $(SERVER_OBJ)
.PHONY: all bonus clean fclean re
.SILENT:
