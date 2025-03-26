CLIENT = client
SERVER = server

CL_SOURCE = client.c
SV_SOURCE = server.c

REMOVE = rm
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
LIBFT = libft/libft.a

all: $(SERVER) $(CLIENT)

$(SERVER):
	@echo "Compiling Libft..."
	@cd libft/ && make -s
	@echo "Libft compiled successfully!"
	@cd ../
	@echo "Compiling server..."
	@$(CC) $(CFLAGS) $(SV_SOURCE) -o $(SERVER) $(LIBFT)
	@echo "Server compiled successfully!"

$(CLIENT):
	@echo "Compiling client..."
	@$(CC) $(CFLAGS) $(CL_SOURCE) -o $(CLIENT) $(LIBFT)
	@echo "Client compiled successfully!"

clean:
	@cd libft/ && make clean -s
	@test -f $(LIBFT) && $(REMOVE) $(LIBFT) && echo "Cleaning Libft folder...\nLibft deleted successfully!" || echo "Libft already deleted!"
	@cd ../

fclean: clean
	@test -f $(SERVER) && $(REMOVE) $(SERVER) && echo "Server deleted successfully!" || echo "Server already deleted!"
	@test -f $(CLIENT) && $(REMOVE) $(CLIENT) && echo "Client deleted successfully!" || echo "Client already deleted!"

re: fclean all

.PHONY: all clean fclean re
